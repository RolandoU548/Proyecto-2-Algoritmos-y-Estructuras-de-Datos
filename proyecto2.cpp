#include <iostream>

using namespace std;
template <typename T>
struct NodeL
{
    T dato;
    NodeL<T> *siguiente = nullptr;
    NodeL() = default;
    NodeL(T dato)
    {
        this->dato = dato;
    }
    NodeL(NodeL<T> *siguiente)
    {
        this->siguiente = siguiente;
    }
    NodeL(T dato, NodeL<T> *siguiente)
    {
        this->dato = dato;
        this->siguiente = siguiente;
    }
    NodeL(NodeL<T> *siguiente, T dato)
    {
        this->dato = dato;
        this->siguiente = siguiente;
    }
};

template <typename T>
class List
{
private:
    NodeL<T> *_first = nullptr;
    NodeL<T> *_last = nullptr;
    int quantityElements = 0;

public:
    List() = default;
    List(NodeL<T> *_first, NodeL<T> *_last)
    {
        this->_first = _first;
        this->_last = _last;
    }
    NodeL<T> *first()
    {
        return _first;
    }
    NodeL<T> *last()
    {
        return _last;
    }
    int elements()
    {
        return quantityElements;
    }
    bool isEmpty()
    {
        return _first == nullptr;
    }
    void add(const T &value)
    {
        NodeL<T> *newNode = new NodeL<T>(value);
        if (isEmpty())
        {
            _first = _last = newNode;
            quantityElements++;
            return;
        }
        _last->siguiente = newNode;
        _last = newNode;
        quantityElements++;
    }
    void deleteNode(NodeL<T> *node)
    {
        if (node == nullptr)
            return;
        if (node == _first)
        {
            _first = _first->siguiente;
            delete node;
            quantityElements--;
            return;
        }
        NodeL<T> *aux = _first;
        while (aux != nullptr)
        {
            if (aux->siguiente == node)
            {
                aux->siguiente = node->siguiente;
                delete node;
                quantityElements--;
                if (aux->siguiente == nullptr)
                    _last = aux;
                return;
            }
            aux = aux->siguiente;
        }
    }
    void deleteByIndex(const int &index)
    {
        if (index < 0 || index >= quantityElements)
        {
            cerr << "Out of range" << endl;
            return;
        }
        NodeL<T> *aux = _first;
        for (int i = 0; i < index && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        deleteNode(aux);
    }
    void print()
    {
        NodeL<T> *aux = _first;
        while (aux != nullptr)
        {
            cout << aux->dato;
            if (aux != _last)
            {
                cout << ", ";
            }
            else
            {
                cout << "." << endl;
            }
            aux = aux->siguiente;
        }
    }
    T get(int index)
    {
        if (isEmpty())
        {
            return T();
        }
        if (index < 0 || index >= quantityElements)
        {
            cout << index << "INDEX " << quantityElements << " QUANTITIY" << endl;
            cerr << "Out of range" << endl;
            return T();
        }
        NodeL<T> *aux = _first;
        for (int i = 0; i < index && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        return aux->dato;
    }
    bool belongs(const T &value)
    {
        NodeL<T> *aux = _first;
        while (aux != nullptr)
        {
            if (aux->dato == value)
            {
                return true;
            }
            aux = aux->siguiente;
        }
        return false;
    }
    void insert(const T &value, const int &index)
    {
        if (index < 0 || index > quantityElements)
        {
            cerr << "Out of range" << endl;
            return;
        }
        NodeL<T> *newNode = new NodeL<T>(value);
        if (index == 0)
        {
            newNode->siguiente = _first;
            _first = newNode;
            if (_last == nullptr)
            {
                _last = newNode;
            }
            quantityElements++;
            return;
        }
        if (index == quantityElements)
        {
            _last->siguiente = newNode;
            _last = newNode;
            quantityElements++;
            return;
        }
        NodeL<T> *aux = _first;
        for (int i = 0; i < index - 1 && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        newNode->siguiente = aux->siguiente;
        aux->siguiente = newNode;
        quantityElements++;
    }
    void update(const T &value, const int &index)
    {
        if (index < 0 || index >= quantityElements)
        {
            cerr << "Out of range" << endl;
            return;
        }
        NodeL<T> *aux = _first;
        for (int i = 0; i < index && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        aux->dato = value;
    }
    int getIndex(T object)
    {
        int contador = 0;
        NodeL<T> *aux = _first;
        while (aux != nullptr)
        {
            if (aux->dato = object)
                return contador;
            contador++;
            aux = aux->siguiente;
        }
        return -1;
    }
};

struct Edge
{
    int to;
    int time;
    Edge *next;
};

struct Node
{
    Edge *adj;
    bool visited;
};

List<Node *> nodes;
List<string> node_names;
int T;

struct Queue
{
    int data[100];
    int front, rear;

    Queue() : front(0), rear(0) {}

    void push(int value)
    {
        data[rear++] = value;
    }

    int pop()
    {
        return data[front++];
    }

    bool isEmpty()
    {
        return front == rear;
    }

    void reset()
    {
        front = rear = 0;
    }
};

int findNode(const string name)
{
    for (int i = 0; i < nodes.elements(); ++i)
    {
        if (node_names.get(i) == name)
        {
            return i;
        }
    }
    node_names.add(name);
    if (nodes.last())
        nodes.last()->dato->adj = nullptr;
    return (nodes.elements() - 1);
}

void addEdge(int from, int to, int time)
{
    Edge *edge = new Edge;
    edge->to = to;
    edge->time = time;
    edge->next = nodes.get(from)->adj;
    nodes.get(from)->adj = edge;
}

void resetNodes()
{
    for (int i = 0; i < nodes.elements(); ++i)
    {
        nodes.get(i)->visited = false;
    }
}

// Implementación de BFS
int bfs(int start_node, bool reachable[])
{
    Queue q;
    bool visited[nodes.elements()] = {false};
    int total_time = 0;

    q.push(start_node);
    visited[start_node] = true;
    reachable[start_node] = true;

    while (!q.isEmpty())
    {
        int node = q.pop();
        for (Edge *edge = nodes.get(node)->adj; edge != nullptr; edge = edge->next)
        {
            if (!visited[edge->to])
            {
                visited[edge->to] = true;
                reachable[edge->to] = true;
                total_time += edge->time;
                q.push(edge->to);
                break;
            }
        }
    }

    return total_time;
}

bool canVisitAll(int start_nodes[], int count, int &time)
{
    bool reachable[nodes.elements()] = {false};
    time = 0;
    for (int i = 0; i < count; ++i)
    {
        time += bfs(start_nodes[i], reachable);
    }
    for (int i = 0; i < nodes.elements(); ++i)
    {
        if (!reachable[i])
        {
            return false;
        }
    }
    return true;
}

void tryAllCombinations(int current_count, int start_nodes[], int index, bool &possible, int &best_time, int best_nodes[])
{
    if (current_count == T)
    {
        int time;
        if (canVisitAll(start_nodes, T, time))
        {
            possible = true;
            if (time < best_time)
            {
                best_time = time;
                for (int i = 0; i < T; ++i)
                {
                    best_nodes[i] = start_nodes[i];
                }
            }
        }
        return;
    }
    for (int i = index; i < nodes.elements(); ++i)
    {
        start_nodes[current_count] = i;
        tryAllCombinations(current_count + 1, start_nodes, i + 1, possible, best_time, best_nodes);
    }
}

void findBestInitialTalas(int best_talas[])
{
    int max_reach[nodes.elements()];
    int total_time[nodes.elements()]; // Array para almacenar el tiempo total de cada nodo
    for (int i = 0; i < nodes.elements(); ++i)
    {
        resetNodes();
        bool reachable[nodes.elements()] = {false};
        total_time[i] = bfs(i, reachable); // Almacenar el tiempo total de derrumbe para cada nodo
        int reach_count = 0;
        for (int j = 0; j < nodes.elements(); ++j)
        {
            if (reachable[j])
            {
                reach_count++;
            }
        }
        max_reach[i] = reach_count;
    }

    for (int i = 0; i < T; ++i)
    {
        int best_index = -1;
        for (int j = 0; j < nodes.elements(); ++j)
        {
            if (best_index == -1 || max_reach[j] > max_reach[best_index] ||
                (max_reach[j] == max_reach[best_index] && total_time[j] < total_time[best_index]))
            {
                bool already_selected = false;
                for (int k = 0; k < i; ++k)
                {
                    if (best_talas[k] == j)
                    {
                        already_selected = true;
                        break;
                    }
                }
                if (!already_selected)
                {
                    best_index = j;
                }
            }
        }
        best_talas[i] = best_index;
    }
}

int main()
{
    cin >> T;
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string A, B;
        int C;
        cin >> A >> B >> C;
        int from = findNode(A);
        int to = findNode(B);
        addEdge(from, to, C);
    }

    if (T >= nodes.elements())
    {
        // Si hay más talas disponibles que árboles, se puede talar todos los árboles
        cout << "POSIBLE" << endl;
        for (int i = 0; i < nodes.elements(); ++i)
        {
            cout << node_names.get(i) << endl;
        }
    }
    else
    {
        // Proceder con la comprobación usual
        int start_nodes[nodes.elements()];
        bool possible = false;
        int best_time = 1e9;
        int best_nodes[nodes.elements()];
        tryAllCombinations(0, start_nodes, 0, possible, best_time, best_nodes);

        if (possible)
        {
            cout << "POSIBLE" << endl;
            for (int i = 0; i < T; ++i)
            {
                cout << node_names.get(best_nodes[i]) << endl;
            }
        }
        else
        {
            cout << "IMPOSIBLE" << endl;
            int best_talas[nodes.elements()];
            findBestInitialTalas(best_talas);
            for (int i = 0; i < T; ++i)
            {
                cout << node_names.get(best_talas[i]) << endl;
            }
        }
    }

    return 0;
}