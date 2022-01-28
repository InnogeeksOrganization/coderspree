
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i <= n / 2)
            {
                if (j == 1 || j == n)
                    cout << "*\t";
                else
                    cout << "\t";
            }

            else if (i == n / 2 + 1)
            {
                if (j == n / 2 + 1 || j == 1 || j == n)
                    cout << "*\t";
                else
                    cout << "\t";
            }
            else if (i < n)
            {
                if (j == 1 || j == n || i == j || (i + j) == n + 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }
            else
            {
                if (j == 1 || j == n)
                    cout << "*\t";
                else
                    cout << "\t";
            }
        }

        cout << endl;
    }
    return 0;
}