#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int t=n%10;
        cout<<t<<endl;
        n=n/10;
    }
}