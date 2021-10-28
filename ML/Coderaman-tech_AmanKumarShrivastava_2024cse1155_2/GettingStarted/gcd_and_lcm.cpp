#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll num1, num2;
    ll temp;
    cin >> num1 >> num2;
    ll n1=num1,n2=num2;
    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
   
    cout<<temp<<"\n";
   cout<<(n1*n2)/temp<<"\n";
    
}