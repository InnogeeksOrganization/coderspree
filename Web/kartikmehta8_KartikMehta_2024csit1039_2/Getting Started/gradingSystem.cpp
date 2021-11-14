#include <iostream>

using namespace std;

void grade(int X) {
    if (X > 90) {
        cout << "excellent";
    } else if (X > 80 && X <= 90) {
        cout << "good";
    } else if (X > 70 && X <= 80) {
        cout << "fair";
    } else if (X > 60 && X <=70) {
        cout << "meets expectations";
    } else {
        cout << "below par";
    }
}

int main()
{
    int N;
    cin >> N;
    grade(N);
    return 0;
}
