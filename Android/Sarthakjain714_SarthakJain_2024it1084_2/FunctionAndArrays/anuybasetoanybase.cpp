#include<iostream>
#include<math.h>
using namespace std;

int anybasetoanybase(int n, int base1, int base2){
    int remainder;
    int sum=0;
    int power=0;
    if(base1<base2){
        while(n!=0){
        remainder=n%10;
        sum=sum+remainder*(pow(base1,power));
        power++;
        n=n/10;
        }
    }
        n=sum;
        power=0;
        sum=0;
        
        // else if(base1>base2){
            while(n!=0){
            remainder=n%base2;
            sum=sum+(remainder*pow(10,power));
            
            power++;
            n=n/base2;
        }
    // }
    return sum;
}
int main(){
    int number, base1 ,base2;
    cin>>number>>base1>>base2;
    cout<<anybasetoanybase(number, base1,base2);
}
