#include<iostream>
using namespace std;


int main()
{
    int arr[31], n, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int temp = max;
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (temp == arr[j])
            {
                cout << "*\t";
                arr[j] = arr[j] - 1;
            }
            else
            {
                cout << "\t";
            }
        }
        temp--;
        cout << "\n";
    }
}