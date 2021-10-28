#include<iostream>
using namespace std;


int main(){
    int a[20],n,d,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            cout<<i;
            break;
        }
        else if((i==n-1)&&(a[i]!=d))
        {
            cout<<-1;
        }
    }


    
    
}