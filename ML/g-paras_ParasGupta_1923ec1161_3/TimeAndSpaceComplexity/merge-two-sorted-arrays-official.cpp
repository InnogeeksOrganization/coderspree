#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int> &A, vector<int> &B)
{
    vector<int> ans;
    int x, y;
    x = y = 0;
    while (x < A.size() && y < B.size())
    {
        if (A[x] < B[y])
            ans.push_back(A[x++]);
        else
            ans.push_back(B[y++]);
    }
    while (x < A.size())
    {
        ans.push_back(A[x++]);
    }
    while (y < B.size())
    {
        ans.push_back(B[y++]);
    }
    return ans;
}

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void output(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n, 0);
    input(A);

    cin >> m;
    vector<int> B(m, 0);
    input(B);

    vector<int> ans = mergeTwoSortedArrays(A, B);
    output(ans);
    return 0;
}