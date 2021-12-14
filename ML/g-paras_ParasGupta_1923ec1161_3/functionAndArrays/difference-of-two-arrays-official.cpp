#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    int *a1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;
    int *a2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    int z = max(n1, n2);
    int i = n1 - 1;
    int j = n2 - 1;
    int *ans = new int[z];
    z -= 1;
    int c = 0;
    while (z >= 0)
    {
        ans[z] += a2[j];
        if (c)
        {
            ans[z] -= c;
            c = 0;
        }
        if (i >= 0)
        {
            ans[z] -= a1[i];
        }
        if (ans[z] < 0)
        {
            ans[z] += 10;
            c = 1;
        }
        z--;
        i--;
        j--;
    }
    int idx = 0;
    while (idx < n2 && ans[idx] == 0)
        idx++;
    for (int i = idx; i < n2; i++)
        cout << ans[i] << endl;
}