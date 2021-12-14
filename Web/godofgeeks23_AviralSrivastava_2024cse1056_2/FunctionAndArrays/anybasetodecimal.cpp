#include <iostream>
using namespace std;
int AnyToDec(int n, int base)
{
    //write your code here.
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
int main()
{
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = AnyToDec(n, b);
    cout << res << endl;
}