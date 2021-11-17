#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n,i,d,pos,flag=0;
    int a[10000000];
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
            pos=i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
    else
    cout<<pos;
    
}