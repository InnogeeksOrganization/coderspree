#include <iostream>
using namespace std;

int reverse(int n) {
    int ans = 0;
    while (n) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    int ans = reverse(n);
    while (ans) {
        cout << ans%10 << endl;
        ans /= 10;
    }
}
