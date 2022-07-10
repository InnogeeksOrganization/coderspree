#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

class Edge
{
public:
    int src = 0;
    int nbr = 0;

    Edge(int src, int nbr)
    {
        this->src = src;
        this->nbr = nbr;
    }
};

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
        graph[u].push_back(Edge(u, v));
        graph[v].push_back(Edge(v, u));
    }

    int src;
    cin >> src;

    vector<bool> visited(vtces, false);

    queue<pair<int, string>> q;
    q.push(make_pair(src, to_string(src)));

    while (!q.empty())
    {
        pair<int, string> p = q.front();
        q.pop();
        if (visited[p.first] == true)
            continue;
        visited[p.first] = true;
        cout << p.first << '@' << p.second << endl;
        for (auto edge : graph[p.first])
        {
            if (visited[edge.nbr] == false)
            {
                q.push(make_pair(edge.nbr, p.second + to_string(edge.nbr)));
            }
        }
    }

    return 0;
}