#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ps(n, 0);
    vector<int> ns(n, 0);
    stack<int> st;
    // previous smaller
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
        if (st.empty())
            ps[i] = -1;
        else
            ps[i] = st.top();
        st.push(i);
    }
    st = stack<int>();
    // next smaller
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
        if (st.empty())
            ns[i] = n;
        else
            ns[i] = st.top();
        st.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(arr[i] * (ns[i] - ps[i] - 1), ans);
    }
    cout << ans << endl;
    return 0;
}