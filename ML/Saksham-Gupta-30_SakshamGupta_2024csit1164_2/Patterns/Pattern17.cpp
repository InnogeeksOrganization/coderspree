#include <iostream>
using namespace std;

int main(int agrc, char **argv)
{
    int n, i, j, k;
    cin >> n;
    if (n % 2 == 1)
    {
        for (i = 1; i <= n / 2; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == ((n + 1) / 2))
                    for (k = 1; k <= i; k++)
                        cout << "*\t";
                else
                    cout << "\t";
            }
            cout << endl;
        }
        for (i = 1; i <= n; i++)
            cout << "*\t";
        cout << endl;
        for (i = n / 2; i >= 1; i--)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == ((n + 1) / 2))
                    for (k = i; k >= 1; k--)
                        cout << "*\t";
                else
                    cout << "\t";
            }
            cout << endl;
        }
    }
}