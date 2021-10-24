#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j, k, l;
    cin >> n >> m;
    int arr[101][101];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
            cin >> arr[i][j];
    }
    for (i = 1; i <= m; i++)
    {
        if (i % 2 == 1)
        {
            for (j = 1; j <= n; j++)
            {
                cout << arr[j][i] << endl;
            }
        }
        if (i % 2 == 0)
        {
            for (j = n; j >= 1; j--)
            {
                cout << arr[j][i] << endl;
            }
        }
    }
}