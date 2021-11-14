#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxnum, minnum, span;
    maxnum=minnum=a[0];
    for(int i=1;i<n;i++){
        maxnum=max(maxnum,a[i]);
    }
    for(int i=1;i<n;i++){
        minnum=min(minnum,a[i]);
    }
    span=maxnum-minnum;
    cout<<span<<endl;
}
