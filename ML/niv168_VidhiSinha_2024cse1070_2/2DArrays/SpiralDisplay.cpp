#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<i<<endl<<j;
                exit;
            }
        }
    }
    return 0;
       }