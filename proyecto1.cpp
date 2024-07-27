#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

const int MAX_NODES = 100;
const int INF = 1e9; // Un valor grande representando infinito

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

Node nodes[MAX_NODES];
char node_names[MAX_NODES][101];
int node_count = 0;
int T;

// Cola para BFS
struct Queue
{
    int data[MAX_NODES];
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

int findNode(const char *name)
{
    for (int i = 0; i < node_count; ++i)
    {
        if (strcmp(node_names[i], name) == 0)
        {
            return i;
        }
    }
    strcpy(node_names[node_count], name);
    nodes[node_count].adj = nullptr;
    return node_count++;
}

void addEdge(int from, int to, int time)
{
    Edge *edge = (Edge *)malloc(sizeof(Edge));
    edge->to = to;
    edge->time = time;
    edge->next = nodes[from].adj;
    nodes[from].adj = edge;
}

void resetNodes()
{
    for (int i = 0; i < node_count; ++i)
    {
        nodes[i].visited = false;
    }
}

// Implementación de BFS
int bfs(int start_node, bool reachable[])
{
    Queue q;
    bool visited[MAX_NODES] = {false};
    int total_time = 0;

    q.push(start_node);
    visited[start_node] = true;
    reachable[start_node] = true;

    while (!q.isEmpty())
    {
        int node = q.pop();
        for (Edge *edge = nodes[node].adj; edge != nullptr; edge = edge->next)
        {
            if (!visited[edge->to])
            {
                visited[edge->to] = true;
                reachable[edge->to] = true;
                total_time += edge->time;
                q.push(edge->to);
                break; // Solo derrumbamos un árbol por efecto dominó
            }
        }
    }

    return total_time;
}

bool canVisitAll(int start_nodes[], int count, int &time)
{
    bool reachable[MAX_NODES] = {false};
    time = 0;
    for (int i = 0; i < count; ++i)
    {
        time += bfs(start_nodes[i], reachable);
    }
    for (int i = 0; i < node_count; ++i)
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
    for (int i = index; i < node_count; ++i)
    {
        start_nodes[current_count] = i;
        tryAllCombinations(current_count + 1, start_nodes, i + 1, possible, best_time, best_nodes);
    }
}

void findBestInitialTalas(int best_talas[])
{
    int max_reach[MAX_NODES];
    int total_time[MAX_NODES]; // Array para almacenar el tiempo total de cada nodo
    for (int i = 0; i < node_count; ++i)
    {
        resetNodes();
        bool reachable[MAX_NODES] = {false};
        total_time[i] = bfs(i, reachable); // Almacenar el tiempo total de derrumbe para cada nodo
        int reach_count = 0;
        for (int j = 0; j < node_count; ++j)
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
        for (int j = 0; j < node_count; ++j)
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
        char A[101], B[101];
        int C;
        cin >> A >> B >> C;
        int from = findNode(A);
        int to = findNode(B);
        addEdge(from, to, C);
    }

    if (T >= node_count)
    {
        // Si hay más talas disponibles que árboles, se puede talar todos los árboles
        cout << "POSIBLE" << endl;
        for (int i = 0; i < node_count; ++i)
        {
            cout << node_names[i] << endl;
        }
    }
    else
    {
        // Proceder con la comprobación usual
        int start_nodes[MAX_NODES];
        bool possible = false;
        int best_time = INF;
        int best_nodes[MAX_NODES];
        tryAllCombinations(0, start_nodes, 0, possible, best_time, best_nodes);

        if (possible)
        {
            cout << "POSIBLE" << endl;
            for (int i = 0; i < T; ++i)
            {
                cout << node_names[best_nodes[i]] << endl;
            }
        }
        else
        {
            cout << "IMPOSIBLE" << endl;
            int best_talas[MAX_NODES];
            findBestInitialTalas(best_talas);
            for (int i = 0; i < T; ++i)
            {
                cout << node_names[best_talas[i]] << endl;
            }
        }
    }

    return 0;
}