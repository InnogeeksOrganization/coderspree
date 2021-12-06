#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans, c;
    cin >> n;
    ans = 0;
    c = 1;
    while (n)
    {
        ans += c * pow(10, n % 10 - 1);
        n /= 10;
        c++;
    }
    cout << ans << endl;
    return 0;
}