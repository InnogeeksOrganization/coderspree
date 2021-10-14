#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    int tnum1 = num1;
    int tnum2 = num2;

    while (tnum1 % tnum2 != 0){
        int rem = tnum1 % tnum2;
        tnum1 = tnum2;
        tnum2 = rem;
    }

    int gcd = tnum2;
    int lcm = (num1 * num2) / gcd;

    cout << (gcd) << endl;
    cout << (lcm) << endl;
}         