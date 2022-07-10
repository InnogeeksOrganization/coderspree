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

void hasPath(vector<Edge> graph[], int src, int dst, vector<bool> vst, string path)
{
    if (src == dst)
    {
        path += to_string(src);
        cout << path << endl;
        return;
    }
    vst[src] = true;
    for (auto edge : graph[src])
    {
        if (vst[edge.nbr] == false)
            hasPath(graph, edge.nbr, dst, vst, path + to_string(src));
    }
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
    vector<bool> vst(vtces, false);
    hasPath(graph, src, dest, vst, "");
}