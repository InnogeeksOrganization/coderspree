#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;
    int a1[n1];
    for (int i = 0; i < n1; i++)
        cin >> a1[i];

    cin >> n2;
    int a2[n2];
    for (int i = 0; i < n2; i++)
        cin >> a2[i];

    unordered_map<int, int> mp;

    for (auto i : a1)
        mp[i]++;

    for (auto i : a2)
    {
        if (mp[i] > 0)
        {
            cout << i << endl;
            mp[i]--;
        }
    }
}