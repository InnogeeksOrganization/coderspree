#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int src;
    int nbr;
    int wt;

    Edge(int src, int nbr, int wt)
    {
        this->src = src;
        this->nbr = nbr;
        this->wt = wt;
    }
};

void printConn(vector<Edge> graph[], int src, vector<bool> &visited, vector<int> &comp)
{
    visited[src] = true;
    comp.push_back(src);
    for (auto edge : graph[src])
    {
        if (visited[edge.nbr] == false)
            printConn(graph, edge.nbr, visited, comp);
    }
    // visited[src] = false;
}

int main()
{
    int vtces;
    cin >> vtces;
    vector<Edge> graph[vtces];

    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        int v1;
        int v2;
        int wt;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back(Edge(v1, v2, wt));
        graph[v2].push_back(Edge(v2, v1, wt));
    }

    vector<vector<int>> comps;
    vector<bool> visited(vtces, false);

    for (int i = 0; i < vtces; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            vector<int> comp;
            printConn(graph, i, visited, comp);
            comps.push_back(comp);
        }
    }

    cout << "[";
    for (int i = 0; i < comps.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < comps[i].size(); j++)
        {
            if (j != comps[i].size() - 1)
                cout << comps[i][j] << ", ";
            else
                cout << comps[i][j];
        }
        cout << "]";
        if (i != comps.size() - 1)
            cout << ", ";
    }
    cout << "]";
}