#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int direc = 0;
    // we strart from east so E=0,S=1,W=3,N=4

    int i = 0, j = 0;

    while (true)
    {
        direc = (direc + arr[i][j]) % 4;

        if (direc == 0)
            j++;
        else if (direc == 1)
            i++;
        else if (direc == 2)
            j--;
        else if (direc == 3)
            i--;

        if (i < 0)
        {
            i++;

            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i == n)
        {
            i--;
            break;
        }

        else if (j == m)
        {
            j--;
            break;
        }
    }

    cout << i << endl;
    cout << j;
    return 0;
}