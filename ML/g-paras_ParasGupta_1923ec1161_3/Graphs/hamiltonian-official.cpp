#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int src = 0;
    int nbr = 0;
    int wt = 0;

    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

void hamiltonian(vector<vector<Edge>> graph, int src, set<int> &visited, string psf, int osrc)
{

    if (visited.size() == graph.size() - 1)
    {
        char c = '.';
        for (auto edge : graph[src])
        {
            if (edge.nbr == osrc)
                c = '*';
        }
        cout << psf << c << endl;
    }
    visited.insert(src);
    for (auto edge : graph[src])
    {
        if (visited.find(edge.nbr) == visited.end())
        {
            hamiltonian(graph, edge.nbr, visited, psf + to_string(edge.nbr), osrc);
        }
    }

    visited.erase(src);
}

int main()
{
    int vtces;
    cin >> vtces;
    vector<vector<Edge>> graph(vtces, vector<Edge>());

    int edges;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back(Edge(u, v, w));
        graph[v].push_back(Edge(v, u, w));
    }
    int src;
    cin >> src;

    set<int> visited;

    hamiltonian(graph, src, visited, "" + to_string(src), src);

    return 0;
}