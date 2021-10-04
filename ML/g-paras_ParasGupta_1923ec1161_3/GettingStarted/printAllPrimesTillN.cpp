#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n) {
    if (n == 2) return 1;
    for (int i=2; i<=sqrt(n)+1; i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    for (int i=low; i<=high; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}