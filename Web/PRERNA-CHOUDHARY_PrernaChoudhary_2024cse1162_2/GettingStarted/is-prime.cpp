#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int t, n;
    cin >> t;
    int flag = 0;

    for (int i = 0; i < t; i++)
    {
        flag = 0;
        cin >> n;
        for (int j = 2; j <= n / 2; j++)
        {

            if (n % j == 0)
                flag++;
        }
        if (flag != 0)
            cout << "not prime\n";
        else
            cout << "prime\n";
    }
}
