#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N == 1) {
        cout << 0;
    } else if (N == 2) {
        cout << 0 << "\n" << 1;
    } else {
        int A = 0, B = 1, C;
        cout << A << "\n" << B << "\n";
        for (int i = 0; i < N-2; i++) {
            C = A + B;
            cout << C << "\n";
            A = B;
            B = C;
        }
    }

    return 0;
}