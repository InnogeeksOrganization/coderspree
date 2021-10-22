#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    cin>>n>>b;
    int sum=0;
   int i=1;
    while(n>0){
        int dig=n%b;
        n=n/b;
        sum+=dig*i;
        i*=10;
    }
    cout<<sum;
}