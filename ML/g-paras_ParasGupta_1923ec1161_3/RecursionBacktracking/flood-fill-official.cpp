#include <iostream>
#include <string>
#include <vector>

using namespace std;

void floodfill(vector<vector<int>> &maze, int sr, int sc, string asf)
{
    if (sr < 0 || sc < 0 || sr == maze.size() || sc == maze[0].size() || maze[sr][sc] == 1)
        return;
    if (sr == maze.size() - 1 && sc == maze[0].size() - 1)
    {
        cout << asf << endl;
        return;
    }
    maze[sr][sc] = 1;
    floodfill(maze, sr - 1, sc, asf + "t");
    floodfill(maze, sr, sc - 1, asf + "l");
    floodfill(maze, sr + 1, sc, asf + "d");
    floodfill(maze, sr, sc + 1, asf + "r");
    maze[sr][sc] = 0;
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