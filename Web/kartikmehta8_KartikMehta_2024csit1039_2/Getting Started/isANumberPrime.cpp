
#include <iostream>
using namespace std;

int isPrimeNumber(int X) {
    if (X == 2) {
        return 1;
    }
    int div = 2;
    for (int i = 2; i < X; i++) {
        if (X % i == 0) {
            div++;
            if (div > 2) {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int T, isPrimeNumber(int X);
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        if (isPrimeNumber(N) == 0) {
            cout << "not prime" << "\n";
        } else {
            cout << "prime" << "\n";
        }
    }

    return 0;
}
