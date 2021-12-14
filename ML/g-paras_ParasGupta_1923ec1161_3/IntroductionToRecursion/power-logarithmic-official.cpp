#include <iostream>
using namespace std;

int powerLogarithmic(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    int p = powerLogarithmic(x, n / 2);
    if (n % 2 == 0)
        return p * p;
    else
        return p * p * x;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powerLogarithmic(x, n);
}