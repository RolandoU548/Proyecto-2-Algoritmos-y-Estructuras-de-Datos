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

int main()
{
    cout << endl
         << endl;
    List<arbol *> lista;
    arbol *arbol1 = new arbol("ABC");
    lista.add(arbol1);
    arbol *prueba = lista.get(0)->siguientes.get(0);
    cout << prueba << endl;
    if (prueba == nullptr)
    {
        cout << "NO TIENE VALOR" << endl;
    }
    return 0;
}