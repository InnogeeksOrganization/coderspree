#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int p = 1;
    while (k--)
    {
        ans += p * (n % 10);
        p *= 10;
        n /= 10;
    }
    cout << ans << n;
}