#include <bits/stdc++.h>
using namespace std;
void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
void targetSumPair(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            cout << arr[i] << ", " << arr[j] << endl;
            i++;
            j--;
        }
    }
}
int main()
{
    int n, target;
    cin >> n;
    vector<int> vec(n, 0);
    input(vec);
    cin >> target;
    targetSumPair(vec, target);
    return 0;
}