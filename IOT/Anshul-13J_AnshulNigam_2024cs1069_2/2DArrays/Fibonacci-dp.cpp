#include <iostream>
using namespace std;

int fib(int n,int qb[]){
    if(n==0 || n==1)
        return n;
    if(qb[n] != 0)
        return qb[n];
    int fibnm1= fib(n-1,qb);
    int fibnm2= fib(n-2,qb);
    int fibn= fibnm1 + fibnm2;
    qb[n]= fibn;
    return fibn; 
}

int main(){
    int n;
    cin>>n;
    int qb[n+1]={};
    cout<<fib(n,qb)<<endl;
    return 0;
}