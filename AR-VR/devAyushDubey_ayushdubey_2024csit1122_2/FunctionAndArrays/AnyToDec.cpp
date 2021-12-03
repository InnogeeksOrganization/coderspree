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

int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}