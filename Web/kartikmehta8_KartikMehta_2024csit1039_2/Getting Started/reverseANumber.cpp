#include <iostream>
#include <cmath>

using namespace std;

void reverseANumber(int X) {
    if (X < 10) {
        cout << X;
    } else {
        cout << X%10 << "\n";
        return reverseANumber(X/10);
    }
}

int main()
{
    int N;
    cin >> N;
    reverseANumber(N);
    return 0;
}