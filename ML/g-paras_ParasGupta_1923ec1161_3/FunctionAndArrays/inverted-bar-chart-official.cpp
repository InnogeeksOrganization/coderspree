#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > i)
                cout << "*\t";
            else
                cout << "\t";
        }
        cout << "\n";
    }
}