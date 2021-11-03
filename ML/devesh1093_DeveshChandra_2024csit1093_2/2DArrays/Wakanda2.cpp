#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for ( i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> arr[i][j];
    int k, l=0;
    for(k= n-1 ; k>=0; k--)
    {
        for(i=0;i<=k;i++)
        {
            cout<<arr[i][i+l]<<'\n';
        }
        l++;
    }
return 0;
    
}
