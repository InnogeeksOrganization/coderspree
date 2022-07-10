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

bool hasPath(vector<Edge> graph[], int src, int dst, vector<bool> vis)
{
    if (src == dst)
        return true;
    vis[src] = true;
    for (auto edge : graph[src])
    {
        if (vis[edge.nbr] == false && hasPath(graph, edge.nbr, dst, vis))
            return true;
    }
    return false;
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

    int src;
    cin >> src;
    int dest;
    cin >> dest;
    // write your code here
    vector<bool> vis(vtces, false);
    //   cout << hasPath(graph, src, dest, vis) << endl;
    if (hasPath(graph, src, dest, vis))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
