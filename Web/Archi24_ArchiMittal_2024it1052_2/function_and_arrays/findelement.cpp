#include<iostream>
using namespace std;
int find(int arr[],int n,int d)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            return i;
        }
        
    }
    return -1; 
}

int main(){
    int n,arr[100],i,flag=0,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d;
    cin>>d;
    int g;
    g=find(arr,n,d);
    cout<<g;
  return 0;  
}