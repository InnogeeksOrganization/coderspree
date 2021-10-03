#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> solve(vector<int> v, int n, int k)
{
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && q.front() < v[i])
        {
            q.pop();
        }
        q.push(v[i]);
    }
    vector<int> res;
    res.push_back(q.front());
    for (int i = k; i < n; i++)
    {
        if (q.size() == k)
        {
            q.pop();
            while (!q.empty() && q.front() < v[i])
            {
                q.pop();
            }
            if (q.empty())
            {
                res.push_back(v[i]);
            }
            else
            {
                res.push_back(q.front());
            }
        }
        else
        {
            while (!q.empty() && q.front() < v[i])
            {
                q.pop();
            }
            if (q.empty())
            {
                res.push_back(v[i]);
            }
            else
            {
                res.push_back(q.front());
            }
        }
        q.push(v[i]);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    vector<int> r = solve(v, n, k);
    return 0;
}