#include <bits/stdc++.h>
using namespace std;

int sortK(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i <= k; i++)
        q.push(arr[i]);

    for (int i = k + 1; i < n; i++)
    {
        cout << q.top() << endl;
        q.pop();
        q.push(arr[i]);
    }

    while (q.size() > 0)
    {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    int k;
    cin >> k;
    sortK(arr, n, k);
    return 0;
}