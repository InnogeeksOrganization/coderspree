#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc)
{
    vector<string> ans;
    if (sr == dr && sc == dc)
    {
        ans = {""};
        return ans;
    }
    for (int i = 1; i <= (dc - sc); i++)
    {
        for (auto j : get_maze_paths(sr, sc + i, dr, dc))
        {
            ans.push_back("h" + to_string(i) + j);
        }
    }
    for (int i = 1; i <= (dr - sr); i++)
    {
        for (auto j : get_maze_paths(sr + i, sc, dr, dc))
        {
            ans.push_back("v" + to_string(i) + j);
        }
    }
    for (int i = 1; i <= min(dr - sr, dc - sc); i++)
    {
        for (auto j : get_maze_paths(sr + i, sc + i, dr, dc))
        {
            ans.push_back("d" + to_string(i) + j);
        }
    }
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
    vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
    display(ans);

    return 0;
}