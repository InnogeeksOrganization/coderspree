#include <bits/stdc++.h>

#define ll long long 
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    
    ll temp = n;
    ll n_digits = 0;
    
    while(temp>0){
        n_digits++;
        temp/=10;
    }
    
    k = k%n_digits;
    if(k<0)
        k = n_digits+k;
        
    
    ll split_digs = n%(ll)pow(10, k);
    n /= (ll)pow(10, k);
    
    split_digs *= (ll)pow(10, n_digits-k);
    n += split_digs;
    
    cout<<n;
}