#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n, i, j;
    cin >> n;
    if (n % 2 == 1)
    {
        for (i = 1; i <= (n / 2) + 1; i++)
        {
            for (j = i; j <= (n / 2) + 1; j++)
                cout << "*\t";
            for (j = 1; j <= i; j++)
                cout << "\t";
            for (j = 1; j < i; j++)
                cout << "\t";
            for (j = i; j <= (n / 2) + 1; j++)
                cout << "*\t";
            cout << endl;
        }
        for (i = 1; i <= (n / 2); i++)
        {
            for (j = 1; j <= i + 1; j++)
                cout << "*\t";
            for (j = (n / 2); j >= i; j--)
                cout << "\t";
            for (j = i; j < (n / 2); j++)
                cout << "\t";
            for (j = 1; j <= i + 1; j++)
                cout << "*\t";
            cout << endl;
        }
    }
}