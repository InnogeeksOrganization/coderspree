#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int innsp = -1;
    int outsp = n / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= outsp; j++)
        {
            cout << "\t";
        }

        cout << "*\t";

        for (int j = 1; j <= innsp; j++)
        {
            cout << "\t";
        }
        if (i > 1 && i < n)
            cout << "*\t";

        if (i <= n / 2)
        {
            outsp--;
            innsp += 2;
        }
        else
        {
            outsp++;
            innsp -= 2;
        }
        cout << endl;
    }

    return 0;
}