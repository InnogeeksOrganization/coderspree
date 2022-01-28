#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int star = n / 2 + 1;
    int space = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            //1. when row is first row
            if (i == 1)
            {
                if (j == n || j <= n / 2 + 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }

            //2. when row is greater than 1 but less than middle row
            else if (i <= n / 2)
            {
                if (j == n || j == n / 2 + 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }
            //3. when row is middle
            else if (i == n / 2 + 1)
            {
                cout << "*\t";
            }
            //4. when row is greater than middle row but less than last row
            else if (i < n)
            {
                if (j == 1 || j == n / 2 + 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }
            //5. when row is last row
            else
            {
                if (j == 1 || j >= n / 2 + 1)
                    cout << "*\t";
                else
                    cout << "\t";
            }
        }

        cout << endl;
    }
    return 0;
}