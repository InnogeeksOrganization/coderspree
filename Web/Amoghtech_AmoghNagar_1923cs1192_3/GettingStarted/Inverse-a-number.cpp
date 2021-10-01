#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    map<int, pair<pair<int, int>, int>> m;
    long long int t = 10;
    int x = n, c = 0;
    while (x != 0)
    {
        c++;
        x /= 10;
    }
    x = 1;
    while (c--)
    {
        m.insert(make_pair(x, make_pair(make_pair(x, (n % t) * 10 / t), 0)));
        t *= 10;
        x++;
    }
    for (auto i : m)
    {
        // cout << i.first << " " << i.second.first << " " < < < < endl;
        if (i.second.second == 0)
        {
            int l = i.second.first;
            int a = i.first;
            int b = m[l].first;
            i.first = b;
            m[l].first = a;
            m[l].second = 1;
            i.second.second = 1;
        }
    }
}