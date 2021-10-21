#include <iostream>
using namespace std;

int main()
{
    int n, i , j, k, min, max, minimum, maximum, flag = 0;
    cin >> n;
    int arr[101][101];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            min = arr[i][j];
            max = arr[i][j];
            minimum = 1000000000;
            maximum = -1000000000;
            for (k = 1; k <= n; k++)
            {
                if (minimum > arr[i][k])
                    minimum = arr[i][k];
            }
            for (k = 1; k <= n; k++)
            {
                if (maximum < arr[k][j])
                    maximum = arr[k][j];
            }
            if ((minimum == min) && (maximum == max))
            {
                cout << arr[i][j];
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 0)
        cout << "Invalid input";
}