#include <bits/stdc++.h>
using namespace std;

// set is the subset
// sos is sum of subset
// tar is target

void printTargetSumSubsets(vector<int> arr, int idx, string set, int sos, int tar)
{

    if (sos > tar || idx == arr.size())
    {
        if (sos == tar)
            cout << set << "." << endl;
        return;
    }
    printTargetSumSubsets(arr, idx + 1, set + to_string(arr[idx]) + ", ", sos + arr[idx], tar);
    printTargetSumSubsets(arr, idx + 1, set, sos, tar);
}

int main()
{
    int n, tar;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> tar;
    printTargetSumSubsets(arr, 0, "", 0, tar);
}