#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int i = 0;
    int p = 1;
    while (n > 0){
        int dig = n % 10;
        n = n / 10;
        i += p * pow(10, dig - 1);
        p++;
    }

    cout << (i) << endl;
}