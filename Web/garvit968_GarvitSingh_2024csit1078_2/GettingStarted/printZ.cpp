#include<iostream>
using namespace std;
int main(){
    int i,j;
    for( i=0;i<5;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
    for( i=0;i<5;i++)
    {
        cout<<"*";
    }

}