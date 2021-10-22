#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n)
{
    int i;
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int i, low, high;
    cin >> low >> high;
    for (i = low; i <= high; i++)
    {
        if (isPrime(i) == 1)
            cout << i << endl;
    }
}