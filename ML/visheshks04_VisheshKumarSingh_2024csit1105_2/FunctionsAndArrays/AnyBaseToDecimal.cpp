#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int ToDecimal(int n, int b){
    int result=0;
    int p = 0;
    while(n>0){
        int dig = n%10;
        n/=10;
        result += dig*pow(b,p);
        p++;
    }
    
    return result;
}

int main(){
    
    int num;
    int base;
    
    cin>>num>>base;
    cout<<ToDecimal(num, base);
    
    return 0;
}
