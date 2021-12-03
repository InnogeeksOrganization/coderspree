#include<iostream>
using namespace std;


int main(){
    int n,d,c=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    for(int j=0;j<n;j++)
    {
        if(a[j]==d)
        c=j;
    }
    cout<<c;
}
