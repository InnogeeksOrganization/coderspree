
#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
    int i,l;
       l=arr[n-1];
       for(i=n-1;i>=0;i--)
       {
           arr[i]=arr[i-1];
       }
       arr[0]=l;
    
}
        


int main()
{
    int n,k,i,arr[100];
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
             scanf("%d",&arr[i]);
        }
       cin>>k;
       for(i=0;i<k;i++)
       {
           rotate(arr,n);
       }
       for(i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
    }
    return 0;
}