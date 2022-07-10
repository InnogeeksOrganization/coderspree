#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int src;
    int dst;

    Edge(int src, int dst)
    {
        this->src = src;
        this->dst = dst;
    }
};

void getConnected(vector<Edge> graph[], int src, vector<bool> &visited, vector<int> &conn)
{
    visited[src] = true;
    conn.push_back(src);
    for (auto edge : graph[src])
    {
        if (visited[edge.dst] == false)
        {
            visited[edge.dst] = false;
            getConnected(graph, edge.dst, visited, conn);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<Edge> graph[n];

    for (int i = 0; i < k; i++)
    {
        int src, dst;
        cin >> src >> dst;
        graph[src].push_back(Edge(src, dst));
        graph[dst].push_back(Edge(dst, src));
    }

    vector<bool> visited(n, false);
    vector<int> conns;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            visited[i] = true;
            vector<int> conn;
            getConnected(graph, i, visited, conn);
            conns.push_back(conn.size());
        }
    }

    int ans = 0;

    for (int i = 0; i < conns.size() - 1; i++)
    {
        for (int j = i + 1; j < conns.size(); j++)
        {
            ans += conns[i] * conns[j];
        }
    }

    cout << ans << endl;

    return 0;
}
