#include<iostream>
using namespace std;
void fib(int n){
    int t1=0, t2=1, nexterm;
    for(int i=1;i<=n;i++){
        nexterm=t1+t2;
        cout<<t1<<endl;
        t1=t2;
        t2=nexterm;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fib(n);
}