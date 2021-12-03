#include <iostream>

using namespace std;
int AnyToDec(int n, int base)
{
    int decimalNumber = 0;
    int baseNumber = 1;
    while (n != 0)
    {
        int lastDigit = n % 10;
        decimalNumber = decimalNumber + lastDigit * baseNumber;
        baseNumber = baseNumber * base;
        n = n / 10;
    }
    return decimalNumber;
}
int getSum(int b, int n1, int n2) {
    int n = AnyToDec(n1, b) + AnyToDec(n2, b);
    string s = "";
    while (n > 0)
    {
        s = char(n % b + '0') + s;
        n /= b;
    }
    cout << s << endl;
}

int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    getSum(b, n1, n2);
}