#include<iostream>
#include<math.h>
using namespace std;

int decimaltobase(int n, int base){
    int remainder;
    int sum=0;
    int power=0;
    while(n!=0){
        remainder=n%base;
        sum=sum+(remainder*pow(10,power));
        power++;
        // cout<<power;
        n=n/base;
    }
    return sum;
}

int main(){
    int number;
    int base;
    cin>>number>>base;
    cout<<decimaltobase(number,base);
}