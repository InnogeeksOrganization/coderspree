#include <iostream>
#include<cmath>

using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    
    long long temp = n;
    long long n_digits = 0;
    
    while(temp>0){
        n_digits++;
        temp/=10;
    }
    
    k = k%n_digits;
    if(k<0)
        k = n_digits+k;
        
    
    long long split_digs = n%(long long)pow(10, k);
    n /= (long long)pow(10, k);
    
    split_digs *= (long long)pow(10, n_digits-k);
    n += split_digs;
    
    cout<<n;
}
