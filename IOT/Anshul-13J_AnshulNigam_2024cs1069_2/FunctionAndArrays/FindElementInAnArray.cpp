#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n],i,d,found=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        {
            cout<<i;
            found=1;
        }
    }
    if(!found)
        cout<<-1;
    
}