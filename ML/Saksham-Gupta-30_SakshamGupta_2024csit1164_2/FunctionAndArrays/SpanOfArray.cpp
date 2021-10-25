#include <iostream>
using namespace std;

int main()
{
    int n, i, max, min, arr[10001];
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    max = arr[1];
    min = arr[1];
    for (i = 2; i <= n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << max - min;
}