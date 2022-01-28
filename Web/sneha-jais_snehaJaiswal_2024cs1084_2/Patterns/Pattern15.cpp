#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int space = n / 2;
    int star = 1;
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
            cout << "\t";

        int cval = val;
        for (int j = 1; j <= star; j++)
        {
            cout << cval << "\t";
            if (j <= star / 2)
                cval++;
            else
                cval--;
        }

        if (i <= n / 2)
        {
            space--;
            star += 2;
            val++;
        }

        else
        {

            space++;
            star -= 2;
            val--;
        }

        cout << endl;
    }

    return 0;
}