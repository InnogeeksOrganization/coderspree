#include<iostream>
using namespace std;

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
  int n;
  int b;
  cin >> n;
  cin >> b;
  DecToAny(n, b);
}