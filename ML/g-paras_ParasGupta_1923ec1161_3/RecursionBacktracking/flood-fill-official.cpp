#include <iostream>
#include <string>
#include <vector>

using namespace std;

void floodfill(vector<vector<int>> maze, int sr, int sc, string asf)
{
    int n = maze.size();
    int m = maze[0].size();
    if (sr == n && sc == m)
    {
        if (asf != "")
            cout << asf << endl;
        return;
    }
    if (((sr - 1) >= 0) && maze[sr - 1][sc] == 0)
    {
        maze[sr - 1][sc] = -1;
        floodfill(maze, sr - 1, sc, asf + "t");
    }
    if (((sc - 1) >= 0) && maze[sr][sc - 1] == 0)
    {
        maze[sr][sc - 1] = -1;
        floodfill(maze, sr, sc - 1, asf + "l");
    }
    if (((sr + 1) < n) && maze[sr + 1][sc] == 0)
    {
        maze[sr + 1][sc] = -1;
        floodfill(maze, sr + 1, sc, asf + "d");
    }
    if (((sc + 1) >= 0) && maze[sr][sc + 1] == 0)
    {
        maze[sr][sc + 1] = -1;
        floodfill(maze, sr, sc + 1, asf + "r");
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    floodfill(arr, 0, 0, "");
}