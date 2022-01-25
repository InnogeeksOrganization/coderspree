#include <iostream>
#include <vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
    vector<string> ans;
    if (sr == dr && sc == dc)
    {
        ans = {""};
        return ans;
    }
    if (sc < dc)
        for (auto i : getMazePaths(sr, sc + 1, dr, dc))
            ans.push_back("h" + i);
    if (sr < dr)
        for (auto i : getMazePaths(sr + 1, sc, dr, dc))
            ans.push_back("v" + i);
    return ans;
}

void display(vector<string> &arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
    }

    cout << "]" << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> ans = getMazePaths(0, 0, n - 1, m - 1);
    display(ans);

    return 0;
}