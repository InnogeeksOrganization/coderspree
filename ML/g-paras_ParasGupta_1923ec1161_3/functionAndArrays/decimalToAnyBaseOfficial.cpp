#include<iostream>
using namespace std;

int main(int argc, char **argv) {
    int d, b;
    cin >> d >> b;
    int converted = 0;
    int p = 1;
    while (d) {
        converted +=  p*(d % b);
        p *= 10;
        d /= b;
    }
    cout << converted;
}