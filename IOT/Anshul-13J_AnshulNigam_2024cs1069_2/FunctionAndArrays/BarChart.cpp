#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n],i,max=0,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<max;i++)
    {
        for(j=0;j<n;j++)
        {
            if((max-i)<=a[j])
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;
    }
    
    
}