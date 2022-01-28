#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int iCj = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << iCj << "\t";
            //next icj means icj_plus ic(j+1) term

            int iCjp1 = iCj * (i - j) / (j + 1);
            iCj = iCjp1;
        }
        cout << endl;
    }
    return 0;
}
