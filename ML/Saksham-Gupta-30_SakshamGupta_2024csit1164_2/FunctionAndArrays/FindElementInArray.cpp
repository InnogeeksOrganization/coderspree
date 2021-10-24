#include<iostream>
using namespace std;

int find(int arr[], int n, int d)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (d == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    int n, i, result, d;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> d;
    result = find(arr, n, d);
    cout << result;
}