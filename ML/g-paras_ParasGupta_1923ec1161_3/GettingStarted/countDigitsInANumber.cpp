#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int ans = 0;
    while (n) {
        ++ans;
        n /= 10;
    }
    cout << ans << endl;
}