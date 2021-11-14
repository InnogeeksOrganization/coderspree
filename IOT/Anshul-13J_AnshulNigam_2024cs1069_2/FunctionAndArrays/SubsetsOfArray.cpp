#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i,k,j,index,m;
    cin>>n;
    index=pow(2,n);
    int a[n],arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int b[n];
    for(i=0;i<index;i++)
    {
        k=0;
        j=i;
        for(m=0;m<n;m++)
        {
            b[m]=j%2;
            j=j/2;
        }
        
        for(j=m-1;j>=0;j--)
            a[k++]=b[j];
        for(j=0;j<m;j++)
        {
            if(a[j]==1)
                cout<<arr[j]<<"\t";
            else
                cout<<"-\t";
        }
                
        cout<<endl;
    }
    return 0;
}