#include <iostream>

using namespace std;

int numberOfDigits(int X) {
    if (X == 0) {
        return 0;
    } else {
        return 1 + numberOfDigits(X/10);
    }
}

int main()
{
    int N, numberOfDigits(int X);
    cin >> N;
    cout << numberOfDigits(N);
    return 0;
}
