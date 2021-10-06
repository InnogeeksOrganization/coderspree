#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int hcf = gcd(num1, num2);
    int lcm = num1 * num2 / hcf;
    cout << hcf << endl << lcm;
}