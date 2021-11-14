#include<iostream>
using namespace std;
int main(){
    int n,k,sum=0,cd;
    cin>>n;
    cin>>k;
    while(n>0){
        cd=n%10;
        n=n/10;
        if(cd==k){
            sum++;
        }
    }
    cout<<sum;
    
}