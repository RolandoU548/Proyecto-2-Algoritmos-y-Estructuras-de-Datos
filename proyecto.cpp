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
        if (index < 0 || index >= quantityElements)
        {
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
};

class arbol
{
public:
    string identificador;
    string conexion;
    int tiempo;
    arbol *siguiente;
    arbol() = default;
    arbol(string identificador, string conexion, int tiempo)
    {
        this->tiempo = tiempo;
        this->identificador = identificador;
        this->conexion = conexion;
    }
    arbol(string identificador)
    {
        this->identificador = identificador;
    }
};

int main()
{
    int T;
    int N;
    cin >> T >> N;
    List<arbol *> bosque;
    for (int i = 0; i < N; i++)
    {
        string identificador;
        string conexion;
        int tiempo;
        cin >> identificador >> conexion >> tiempo;
        arbol *aux1 = new arbol(identificador, conexion, tiempo);
        arbol *aux2 = new arbol(conexion);
        bosque.add(aux1);
        bosque.add(aux2);
    }
    for (int i = 0; i < N; i++)
    {
        arbol *arbol1 = bosque.get(i);
        for (int j = 0; j < N; j++)
        {
            arbol *arbol2 = bosque.get(j);
            if (arbol1->conexion == arbol2->identificador)
            {
                arbol1->siguiente = arbol2;
                break;
            };
        }
    }
    for (int i = 0; i < N; i++)
    {
        arbol *arbol1 = bosque.get(i);
        cout << arbol1->identificador << " " << arbol1->siguiente->identificador << endl;
    }
    return 0;
}