#include <iostream>
using namespace std;
void AnyToAny(int n, int b1, int b2)
{
    int decimalNumber = 0;
    int baseNumber = 1;
    while (n != 0)
    {
        int lastDigit = n % 10;
        decimalNumber = decimalNumber + lastDigit * baseNumber;
        baseNumber = baseNumber * b1;
        n = n / 10;
    }
    n = decimalNumber;
    string s = "";
    while (n > 0)
    {
        s = char(n % b2 + '0') + s;
        n /= b2;
    }
    cout << s << endl;
}

int main()
{
    int n, b1, b2;
    cin >> n >> b1 >> b2;
    AnyToAny(n, b1, b2);
}


