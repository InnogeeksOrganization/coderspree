#include <bits/stdc++.h>

using namespace std;

void drawTree(vector<vector<int>> arr, int i, int j, vector<vector<bool>> &visited)
{
    if (i < 0 || j < 0 || i >= arr.size() || j >= arr[0].size() || visited[i][j] == true || arr[i][j] == 1)
        return;
    visited[i][j] = true;
    drawTree(arr, i - 1, j, visited);
    drawTree(arr, i + 1, j, visited);
    drawTree(arr, i, j - 1, visited);
    drawTree(arr, i, j + 1, visited);
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    vector<vector<int>> arr;

    for (int i = 0; i < n; i++)
    {
        vector<int> ans;
        for (int j = 0; j < m; j++)
        {
            int res;
            cin >> res;
            ans.push_back(res);
        }
        arr.push_back(ans);
    }

    int count = 0;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 && visited[i][j] == false)
            {
                drawTree(arr, i, j, visited);
                count++;
            }
            visited[i][j] = true;
        }
    }

    cout << count << endl;
}