#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
            cout << "\t";
        for (int j = n; j >= i; j--)
            cout << "*\t";
        cout << endl;
    }
}