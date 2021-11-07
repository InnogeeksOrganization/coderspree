#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    cin>>n>>b;
    int sum=0;
    int i=0;
    while(n>0){
        int dig=n%10;
        n=n/10;
        sum+=dig*pow(b,i);
        i++;
    }
    cout<<sum;
}