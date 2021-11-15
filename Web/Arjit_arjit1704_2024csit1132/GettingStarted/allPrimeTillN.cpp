#include<iostream>
using namespace std;
int main(){
    int i,n1,n2,n;
    cin>>n1;
    cin>>n2;
    for(i=n1;n<=n2;i++){
        if(n==2){
            cout<<n;
        }
        else if(n%i==0){
            break;
        }
        else{
            cout<<n;
        }
    }
    return 0;
}