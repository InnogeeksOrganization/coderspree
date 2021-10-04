#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int d,n,b; //n for number input and b for base
    cin>>n>>b;
    int p=0;
    while(n>0){
     d=d+(n%10)*pow(b,p);
     n=n/10;
     p++;
    }
    cout<<"decimal form="<<d<<endl;
    return 0;
}