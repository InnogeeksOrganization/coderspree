#include<iostream>
#include<cmath>

using namespace std;

int AnyToDec(int n, int b) {
    int rem,num=0,i=0;
    while(n>0){
        rem = n%10;
        n=n/10;
        num = num + rem*pow(b,i++);
    }
    return num;
//write your code here.
}

void DecToAny(int n, int b) {
    int binary[9],i=0;
    for(i=0;i<9;i++)
        binary[i]=-1;
    i=0;
    while(n>0){
        binary[i++]=n%b;
        n = n/b;
    }
    for(i=8;i>=0;i--){
        if(binary[i] != -1)
            cout<<binary[i];
    }
//write your code here
}

int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    int nn1 = AnyToDec(n1,b);
    int nn2 = AnyToDec(n2,b);
    int sum = nn1 + nn2;
    DecToAny(sum,b);
}