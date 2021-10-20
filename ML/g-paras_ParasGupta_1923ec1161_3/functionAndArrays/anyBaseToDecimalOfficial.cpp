#include<iostream>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int p = 1;
    int ans = 0;
    while (n) {
        ans += p * (n % 10);
        n /= 10;
        p *= b;
    }
    cout << ans;
}