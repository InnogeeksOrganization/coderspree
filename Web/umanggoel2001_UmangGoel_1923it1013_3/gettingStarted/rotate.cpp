#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,mul=1,di=1;
    cin>>n>>k;
   
    int temp=n;
    int count=0;
    while(temp!=0){
    
        temp=temp/10;
        count++;
    }
    k=k%count;
    if(k<0){
        k=count-k;
    }
    
    for(int i=1;i<=count;i++){
        if(i<=k){
            di*=10;
        }
        else{
            mul*=10;
        }
    }
    int q=n/di;
    int r=n%di;
    int rot=r*mul+q;
    cout<<rot;
}