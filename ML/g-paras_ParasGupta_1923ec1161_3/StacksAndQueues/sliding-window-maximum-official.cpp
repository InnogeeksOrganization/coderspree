#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    // next greater
    vector<int> ng(n, 0);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ng[i] = n;
        else
            ng[i] = st.top();
        st.push(i);
    }

    for (int i = 0; i <= n - k; i++)
    {
        int j = i;
        while (ng[j] < i + k)
        {
            j = ng[j];
        }
        cout << arr[j] << endl;
    }

    return 0;
}