#include <iostream>
using namespace std;
int main(int agrc, char **argv)
{
    int n;
    cin >> n;

    int star = 1;
    int space = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
        }

        for (int j = 1; j <= space; j++)
        {
            if (i == n / 2 + 1)
                cout << "*\t";
            else
                cout << "\t";
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*\t";
        }

        if (i <= n / 2)
        {
            star++;
        }
        else
        {
            star--;
        }

        cout << endl;
    }
    return 0;
}