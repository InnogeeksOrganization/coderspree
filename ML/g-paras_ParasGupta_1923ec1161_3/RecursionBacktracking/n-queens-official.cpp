#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> chess, int row, int col, int n)
{
    int i, j;
    for (i = 0; i < row; i++)
        if (chess[i][col] == 1)
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (chess[i][j] == 1)
            return false;

    for (i = row, j = col; i >= 0 && j < n; i--, j++)
        if (chess[i][j] == 1)
            return false;

    return true;
}

void printNQueens(vector<vector<int>> chess, string qsf, int row, int n)
{
    if (row >= n)
    {
        cout << qsf << "." << endl;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(chess, row, col, n))
        {
            chess[row][col] = 1;
            char i = '0' + row;
            char j = '0' + col;
            printNQueens(chess, qsf + i + "-" + j + ", ", row + 1, n);
            chess[row][col] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> chess(n, vector<int>(n));

    printNQueens(chess, "", 0, n);
}