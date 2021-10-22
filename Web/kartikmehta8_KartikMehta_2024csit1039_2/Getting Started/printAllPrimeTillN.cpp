
#include <iostream>
#include <cmath>
using namespace std;

int isPrimeNumber(int X) {
    if (X <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(X); i++) {
        if (X % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int low, high, isPrimeNumber(int X);
    cin >> low >> high;
    for (int i = low; i <= high; i++) {
        if (isPrimeNumber(i) == 1) {
            cout << i << "\n";
        }
    }
    return 0;
}
