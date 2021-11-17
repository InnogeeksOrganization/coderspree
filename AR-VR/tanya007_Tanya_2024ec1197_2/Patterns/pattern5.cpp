#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    for(i=1; i<=(n/2)+1; i++){
        for(j=i; j<(n/2)+1; j++){
            cout<<" ";
        }
        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=(n/2)+1; i>=1; i--){
        for(j=i; j<=(n/2)+1; j++){
            cout<<" ";
        }
        for(j=2; j<(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}