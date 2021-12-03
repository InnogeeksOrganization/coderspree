#include<iostream>
#include<math.h>
using namespace std;

int anybasetodecimal(int number, int base){
    int sum=0;
    int power=0;
    int remainder;
    while(number!=0){
        remainder=number%10;
        sum=sum+remainder*(pow(base,power));
        power++;
        number=number/10;
    }
    return sum;
}
int main(){
    int n,base;
    cin>>n>>base;
    cout<<anybasetodecimal(n,base);
}