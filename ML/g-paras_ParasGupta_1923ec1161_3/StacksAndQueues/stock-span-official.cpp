#include <bits/stdc++.h>
using namespace std;
void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}
vector<int> solve(vector<int> arr)
{
    vector<int> ans(arr.size(), 0);
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
            st.pop();
        if (st.empty())
            ans[i] = i + 1;
        else
            ans[i] = i - st.top();
        st.push(i);
    }
    return ans;
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> span(n, 0);
    span = solve(arr);
    display(span);
    return 0;
}