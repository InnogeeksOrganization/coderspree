#include<iostream>
using namespace std;

int countDigit(int n, int d) {
    int ans = 0;
    while (n){
        if (n % 10 == d) 
            ans ++;
        n /= 10;
    }
    return ans;
}

int main(int argc, char **argv) {
    int n, d;
    cin >> n >> d;
    cout << countDigit(n, d);
}