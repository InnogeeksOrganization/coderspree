#include<iostream>
using namespace std;
int main()
{
    
int n,m;
cin>>n;
cin>>m;
int arr[n][m];

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
    
}
int j=0;
int i;
while(j<m)
{
    if(j%2==0)
    {
        for(i=0;i<n;i++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
    else
    {
        for(i=n-1;i>=0;i--)
        {
            cout<<arr[i][j]<<endl;
        }
    }
    j++;}
    
    return 0;
  
   
   
}