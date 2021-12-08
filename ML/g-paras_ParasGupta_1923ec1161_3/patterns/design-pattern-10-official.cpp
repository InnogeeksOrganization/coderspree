#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j <= n / 2 + i; j++)
        {
            if (j == n / 2 + i or j == n / 2 - i)
                cout << "*\t";
            else
                cout << "\t";
        }
        cout << "\n";
    }
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j <= n / 2 + i; j++)
        {
            if (j == n / 2 + i or j == n / 2 - i)
                cout << "*\t";
            else
                cout << "\t";
        }
        cout << "\n";
    }
}