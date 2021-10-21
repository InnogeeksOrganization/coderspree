#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k, temp, temp2, temp3;
    cin >> n;
    int arr[101][101];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    temp = n;
    temp2 = 1;
    temp3 = 0;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= temp; i++)
        {
            for (j = temp2; j <= n; j++)
            {
                if (j == i + temp3)
                cout << arr[i][j] << endl;
            }
        }
        temp = temp - 1;
        temp2 = temp2 + 1;
        temp3++;
    }
}