#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << j << "\t";
        for (j = i; j < n; j++)
            cout << "\t";
        for (j = i; j < n - 1; j++)
            cout << "\t";
        for (j = i; j >= 1; j--)
        {
            if (n == i)
            {
                for (j = n - 1; j >= 1; j--)
                    cout << j << "\t";
                continue;
            }
            cout << j << "\t";
        }
        cout << endl;
    }
}