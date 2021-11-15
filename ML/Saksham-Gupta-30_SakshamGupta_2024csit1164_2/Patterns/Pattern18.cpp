#include <iostream>
using namespace std;
int main(int agrc, char **argv)
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "*\t";
    }
    cout << endl;
    for (i = 1; i <= (n / 2); i++)
    {
        for (j = 1; j <= i; j++)
            cout << "\t";
        cout << "*\t";
        for (j = i; j <= (n / 2) - 1; j++)
            cout << "\t";
        for (j = i; j <= (n / 2) - 2; j++)
            cout << "\t";
        if (i < (n / 2))
            cout << "*\t";
        cout << endl;
    }
    for (i = 1; i <= (n / 2); i++)
    {
        for (j = i; j <= (n / 2) - 1; j++)
            cout << "\t";
        for (j = 1; j <= i + 1; j++)
            cout << "*\t";
        for (j = 1; j <= i; j++)
            cout << "*\t";
        cout << endl;
    }
}