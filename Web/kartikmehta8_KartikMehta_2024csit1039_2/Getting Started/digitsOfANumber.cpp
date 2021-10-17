#include <iostream>
#include <cmath>

using namespace std;

int numberOfDigits(int X) {
    if (X == 0) {
        return 0;
    } else {
        return 1 + numberOfDigits(X/10);
    }
}

void digitsOfNumber(int Y, int Z) {
    if (Y < 10) {
        cout << Y;
    } else {
        int tens = pow(10,Z-1);
        cout << Y/tens << "\n";
        return digitsOfNumber(Y-((Y/tens)*tens),Z-1);
    }
}

int main()
{
    int N, digits, numberOfDigits(int X);
    cin >> N;
    digits = numberOfDigits(N);
    digitsOfNumber(N, digits);
    return 0;
}