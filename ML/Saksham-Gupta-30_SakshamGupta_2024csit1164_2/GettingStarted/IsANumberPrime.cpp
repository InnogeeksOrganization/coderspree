#include <iostream>
using namespace std;

int isPrime(int n)
{
    int j;
    for (j = 2; j <= n/2; j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
        else
        {
            continue;
        }
    }
    return 1;
}

int main()
{
    int t, i, n;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        if (isPrime(n) == 1)
            cout << "prime" << endl;
        else
            cout << "not prime" << endl;
    }
}