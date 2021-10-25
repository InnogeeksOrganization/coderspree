#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll i;
    for(i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>2){
        cout<<n;
    }
}
