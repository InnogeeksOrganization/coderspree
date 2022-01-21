#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> m;
    vector<int> brr(m, 0);
    for (int j = 0; j < m; j++)
        cin >> brr[j];

    int z = max(n, m);
    vector<int> ans(z, 0);
    z--;
    int i = n - 1;
    int j = m - 1;
    int c = 0;
    while ((i >= 0) || (j >= 0))
    {
        int d = c;
        if (i >= 0)
            d += arr[i];
        if (j >= 0)
            d += brr[j];
        c = d / 10;
        d = d % 10;
        ans[z] = d;
        i--;
        j--;
        z--;
    }
    if (c > 0)
        cout << c << endl;
    for (auto i : ans)
        cout << i << endl;
    return 0;
}