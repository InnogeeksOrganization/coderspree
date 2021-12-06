#include <iostream>
#include <math.h>
using namespace std;

int len(int n)
{
    int l = 0;
    while (n)
    {
        l++;
        n /= 10;
    }
    return l;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int ans = 0;
    int c = len(n);
    int l = c;
    while (n)
    {
        ans += c * pow(10, l - (n % 10));
        c--;
        n /= 10;
    }
    cout << ans;
}