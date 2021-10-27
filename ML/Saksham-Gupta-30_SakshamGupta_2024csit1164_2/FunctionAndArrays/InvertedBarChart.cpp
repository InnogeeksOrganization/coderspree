#include<iostream>
using namespace std;


int main()
{
    int arr[31], n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[1];
    for (i = 2; i <= n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (i = 1; i <= max; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (arr[j] > 0)
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
            arr[j] = arr[j] - 1;
        }
        cout << "\n";
    }
}