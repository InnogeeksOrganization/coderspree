#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n - 1); j++)
        {
            if (j <= i || j >= (2 * n - i))
            {
                if (j <= i)
                    cout << j << "\t";
                else
                    cout << 2 * n - j << "\t";
            }
            else
                cout << "\t";
        }
        cout << endl;
    }

    return 0;
}