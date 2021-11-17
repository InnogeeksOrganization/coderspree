#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxnum;
    maxnum=a[0];
    for(int i=1;i<n;i++){
        maxnum=max(maxnum,a[i]);
    }
    for(int i=0;i<maxnum;i++){
        for(int j=0;j<n;j++){
            if(maxnum-a[j]<=i){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}