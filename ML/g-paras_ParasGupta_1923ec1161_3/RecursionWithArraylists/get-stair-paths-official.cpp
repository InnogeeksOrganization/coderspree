#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> get_stair_paths(int n)
{
    vector<string> ans;
    if (n == 0)
        ans = {""};
    if (n >= 1)
        for (auto i : get_stair_paths(n - 1))
            ans.push_back("1" + i);

    if (n >= 2)
        for (auto i : get_stair_paths(n - 2))
            ans.push_back("2" + i);

    if (n >= 3)
        for (auto i : get_stair_paths(n - 3))
            ans.push_back("3" + i);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}