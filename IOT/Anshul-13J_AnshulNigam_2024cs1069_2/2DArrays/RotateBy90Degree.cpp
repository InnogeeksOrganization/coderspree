#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(int n, vector<vector<int>> &arr)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n-1; j>=0;j--)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    rotate(n, arr);
}