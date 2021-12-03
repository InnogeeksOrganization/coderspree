#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
int findpivot(vector<int> &arr)
{
    int lo = 0, hi = arr.size() - 1;
    int mid = (lo + hi) / 2;
    while (lo != hi)
    {
        if (arr[mid] < arr[hi])
            hi = mid;
        else
            lo = mid + 1;
        mid = (lo + hi) / 2;
    }
    return arr[lo];
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    int pivot = findpivot(vec);
    cout << pivot;
    return 0;
}