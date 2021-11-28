#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n, base;
    cin >> n >> base;
    string s = "";
    while (n > 0)
    {
        s = char(n % base + '0') + s;
        n /= base;
    }
    cout << s;
    return 0;
}