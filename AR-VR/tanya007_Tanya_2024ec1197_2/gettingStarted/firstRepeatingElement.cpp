#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N = 1e6+2;
    int def[N];
    for(int i=0;i<N;i++){
        def[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i=0;i<n;i++){
        if(def[arr[i]]!=-1){
            minidx=min(def[arr[i]], minidx);
        }
        else{
            def[arr[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx<<endl;
    }
}