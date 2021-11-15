#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,count;
    cin>>n>>a;
    while(n!=0){
    int temp=n%10;
    n=n/10;
    if(temp==a){
        count++;
    }
        
    }
    cout<<count;
    
}