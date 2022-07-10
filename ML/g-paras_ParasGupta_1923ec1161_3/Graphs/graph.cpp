#include<iostream>
#include<vector>
using namespace std;

class Edge{
public:
    int src;
    int dst;
    int wt;

    Edge(int node1, int node2, int weight){
        src = node1;
        dst = node2;
        wt = weight;
    }
};

int main() {
    int v = 7;
    vector<Edge> graph[v];
    
    graph[0].push_back(Edge(0, 1, 10));
    graph[0].push_back(Edge(0, 3, 40));


    return 0;
}