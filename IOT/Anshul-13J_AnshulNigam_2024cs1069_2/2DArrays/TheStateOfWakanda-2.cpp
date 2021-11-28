#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>> &arr)
{
    int t=0,i,k;
    for(k= n-1 ; k>=0; k--)
    {
        for(i=0;i<=k;i++)
        {
            cout<<arr[i][i+t]<<endl;
        }
        t++;
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
    
    upperDiagonal_traverse(n, arr);
}