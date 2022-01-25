#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    int r[n],c[n],i,min,max,j,flag=0;
    for(i=0;i<n;i++)
    {
        min=arr[i][0]; 
        for(j=0;j<n;j++)
        {
            if(min>arr[i][j])
                min=arr[i][j];
        }
        r[i]=min;
    }
    for(i=0;i<n;i++)
    {
        max=arr[0][i];
        for(j=0;j<n;j++)
        {
            if(max<arr[j][i])
                max=arr[j][i];
        }
        c[i]=max;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(r[i]==c[j])
            {
                flag=1;
                cout<<r[i];
                break;
            }
        }
    }
    if(!flag)
        cout<<"Invalid input";
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    saddle_point(n, arr);
}