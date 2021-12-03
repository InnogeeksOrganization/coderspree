#include<iostream>
using namespace std;
int main()
{
    int n1,n2,j=0,c1=0,c2=0,x=0;
    cout<<"Enter size of array1 : ";
    cin>>n1;
    cout<<"Enter size of array2 : ";
    cin>>n2;
    int ar1[n1],ar2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>ar1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>ar2[i];
    }
    if(n1>n2)
    {
        int sum[n1];
        j=n1-n2;
        for(int i=n1-1,j=n2-1;i>=0;i--,j--)
        {
            if(j>=0)
                x=ar2[j];
            else
                x=0;
            c1=(ar1[i]+x+c2)/10;
            sum[i]=(ar1[i]+x+c2)%10;
            c2=c1;
        }
        cout<<endl;
        for(int i=0;i<n1;i++)
        {
            cout<<sum[i];
        }
    }
    else
    {
        int sum[n2];
        j=n2-n1;
        for(int i=n2-1,j=n1-1;i>=0;i--,j--)
        {
            if(j>=0)
                x=ar1[j];
            else
                x=0;
            c1=(ar2[i]+x+c2)/10;
            sum[i]=(ar2[i]+x+c2)%10;
            c2=c1;
        }
        for(int i=0;i<n2;i++)
        {
            cout<<sum[i];
        }
    }
}