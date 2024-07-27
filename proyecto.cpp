#include <iostream>
using namespace std;

template <typename T>
struct Node
{
    T dato;
    Node<T> *siguiente = nullptr;
    Node() = default;
    Node(T dato)
    {
        this->dato = dato;
    }
    Node(Node<T> *siguiente)
    {
        this->siguiente = siguiente;
    }
    Node(T dato, Node<T> *siguiente)
    {
        this->dato = dato;
        this->siguiente = siguiente;
    }
    Node(Node<T> *siguiente, T dato)
    {
        this->dato = dato;
        this->siguiente = siguiente;
    }
};

template <typename T>
class List
{
private:
    Node<T> *_first = nullptr;
    Node<T> *_last = nullptr;
    int quantityElements = 0;

public:
    List() = default;
    List(Node<T> *_first, Node<T> *_last)
    {
        this->_first = _first;
        this->_last = _last;
    }
    Node<T> *first()
    {
        return _first;
    }
    Node<T> *last()
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
        Node<T> *newNode = new Node<T>(value);
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
    void deleteNode(Node<T> *node)
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
        Node<T> *aux = _first;
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
        Node<T> *aux = _first;
        for (int i = 0; i < index && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        deleteNode(aux);
    }
    void print()
    {
        Node<T> *aux = _first;
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
        Node<T> *aux = _first;
        for (int i = 0; i < index && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        return aux->dato;
    }
    bool belongs(const T &value)
    {
        Node<T> *aux = _first;
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
        Node<T> *newNode = new Node<T>(value);
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
        Node<T> *aux = _first;
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
        Node<T> *aux = _first;
        for (int i = 0; i < index && aux != nullptr; i++)
        {
            aux = aux->siguiente;
        }
        aux->dato = value;
    }
    int getIndex(T object)
    {
        int contador = 0;
        Node<T> *aux = _first;
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

template <typename T>
class Queue
{
private:
    Node<T> *_first = nullptr;
    Node<T> *_last = nullptr;

public:
    Queue() = default;
    void push(const T &value)
    {
        Node<T> *aux = new Node(value);
        if (_first == nullptr)
        {
            _first = aux;
        }
        else
        {
            _last->siguiente = aux;
        }
        _last = aux;
    }
    T pop()
    {
        T n = _first->dato;
        Node<T> *aux = _first;
        if (_first = _last)
        {
            _first = nullptr;
            _last = nullptr;
        }
        else
        {
            _first = _first->siguiente;
        }
        delete aux;
        return n;
    }
    bool isEmpty()
    {
        return _first == nullptr;
    }
};

class arbol
{
public:
    string identificador;
    List<string> conexiones;
    List<int> tiempos;
    List<arbol *> siguientes;
    arbol() = default;
    arbol(string identificador, string conexion, int tiempo)
    {
        this->tiempos.add(tiempo);
        this->identificador = identificador;
        this->conexiones.add(conexion);
    }
    arbol(string identificador)
    {
        this->identificador = identificador;
    }
};

int calcularTiempo(List<arbol *> bosque, int inicioNodo, int cantidadNodos, bool alcanzable[])
{
    Queue<int> q;
    bool visitado[cantidadNodos] = {false};
    int tiempoTotal = 0;

    q.push(inicioNodo);
    visitado[inicioNodo] = true;
    alcanzable[inicioNodo] = true;

    while (!q.isEmpty())
    {
        int node = q.pop();
        arbol *arbol = bosque.get(node);
        while (arbol != nullptr)
        {
            cout << arbol->identificador << endl;
            if (!visitado[bosque.getIndex(arbol->siguientes.get(0))])
            {
                visitado[bosque.getIndex(arbol->siguientes.get(0))] = true;
                alcanzable[bosque.getIndex(arbol->siguientes.get(0))] = true;
                tiempoTotal += arbol->tiempos.get(0);
                if (arbol->siguientes.get(0) != nullptr)
                    q.push(bosque.getIndex(arbol->siguientes.get(0)));
                break;
            }
            arbol = arbol->siguientes.get(0);
        }
    }
    return tiempoTotal;
}

bool posibleTalar(List<arbol *> bosque, int inicioNodos[], int cantidadNodos, int T, int &tiempo)
{
    bool alcanzable[cantidadNodos] = {false};
    tiempo = 0;
    for (int i = 0; i < T; ++i)
    {
        tiempo += calcularTiempo(bosque, inicioNodos[i], cantidadNodos, alcanzable);
    }
    for (int i = 0; i < cantidadNodos; ++i)
    {
        if (!alcanzable[i])
        {
            return false;
        }
    }
    return true;
}

void combinaciones(List<arbol *> bosque, int T, int cantidadNodos, int talasActuales, int inicioNodos[], bool &posible, int &mejorTiempo, int mejoresNodos[])
{
    if (talasActuales == T)
    {
        int tiempo;
        if (posibleTalar(bosque, inicioNodos, cantidadNodos, T, tiempo))
        {
            posible = true;
            if (tiempo < mejorTiempo)
            {
                mejorTiempo = tiempo;
                for (int i = 0; i < T; ++i)
                {
                    mejoresNodos[i] = inicioNodos[i];
                }
            }
        }
        return;
    }
    for (int i = 0; i < cantidadNodos; ++i)
    {
        inicioNodos[talasActuales] = i;
        combinaciones(bosque, T, cantidadNodos, talasActuales + 1, inicioNodos, posible, mejorTiempo, mejoresNodos);
    }
}

int main()
{
    int T;
    int N;
    cin >> T >> N;
    int *inicioNodos = new int[T];
    int *mejoresNodos = new int[T];
    List<arbol *> bosque;
    // Leer Entrada
    for (int i = 0; i < N; i++)
    {
        string identificador;
        string conexion;
        int tiempo;
        cin >> identificador >> conexion >> tiempo;
        bool pertenece1 = false;
        for (int j = 0; j < bosque.elements(); j++)
        {
            if (identificador == bosque.get(j)->identificador)
            {
                bosque.get(j)->conexiones.add(conexion);
                bosque.get(j)->tiempos.add(tiempo);
                pertenece1 = true;
                break;
            }
        }
        if (!pertenece1)
        {
            arbol *aux1 = new arbol(identificador, conexion, tiempo);
            bosque.add(aux1);
        }
        bool pertenece2 = false;
        for (int j = 0; j < bosque.elements(); j++)
        {
            if (conexion == bosque.get(j)->identificador)
            {
                pertenece2 = true;
                break;
            }
        }
        if (!pertenece2)
        {
            arbol *aux2 = new arbol(conexion);
            bosque.add(aux2);
        }
    }
    // Asignar Siguientes
    for (int i = 0; i < bosque.elements(); i++)
    {
        for (int j = 0; j < bosque.get(i)->conexiones.elements(); j++)
        {
            for (int k = 0; k < bosque.elements(); k++)
            {
                if (bosque.get(k)->identificador == bosque.get(i)->conexiones.get(j))
                {
                    bosque.get(i)->siguientes.add(bosque.get(k));
                }
            }
        }
    }

    // Ejecutar Busqueda
    if (T >= bosque.elements())
    {
        cout << "POSIBLE" << endl;
        for (int i = 0; i < bosque.elements(); ++i)
        {
            cout << bosque.get(i)->identificador << endl;
        }
    }
    else
    {
        int *inicioNodos = new int[T];
        int *mejoresNodos = new int[T];
        bool posible = false;
        int mejorTiempo = 1e9;
        combinaciones(bosque, T, bosque.elements(), 0, inicioNodos, posible, mejorTiempo, mejoresNodos);
        cout << posible << endl;
        if (posible)
        {
            cout << "POSIBLE" << endl;
            for (int i = 0; i < T; ++i)
            {
                cout << bosque.get(mejoresNodos[i])->identificador << endl;
            }
        }
        // else
        // {
        //     cout << "IMPOSIBLE" << endl;
        //     int best_talas[MAX_NODES];
        //     findBestInitialTalas(best_talas);
        //     for (int i = 0; i < T; ++i)
        //     {
        //         cout << bosque.get(best_talas[i])->identificador << endl;
        //     }
        // }
    }
    return 0;
}