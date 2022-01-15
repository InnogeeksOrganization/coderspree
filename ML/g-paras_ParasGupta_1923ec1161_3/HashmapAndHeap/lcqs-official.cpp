#include <bits/stdc++.h>
using namespace std;

void longestConsecutive(vector<int> &num)
{
    unordered_map<int, int> mp;
    for (auto i : num)
    {
        mp[i] = 1;
    }

    for (auto i : num)
    {
        if (mp[i - 1] == 1)
        {
            mp[i] = -1;
        }
    }

    int ml = 0;
    int msp = 0;

    for (auto i : num)
    {
        if (mp[i] == 1)
        {
            int tl = 1;
            int tsp = i;

            while (mp[tsp + tl] != 0)
                tl++;

            if (tl > ml)
            {
                ml = tl;
                msp = tsp;
            }
        }
    }
    for (int i = 0; i < ml; i++)
    {
        cout << msp + i << endl;
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr.push_back(data);
    }
    longestConsecutive(arr);

    return 0;
}