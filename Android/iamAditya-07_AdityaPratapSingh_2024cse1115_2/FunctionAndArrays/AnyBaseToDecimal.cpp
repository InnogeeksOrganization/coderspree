#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
    
int value;
int p=1;

while(n>0){
    int dig= n % 10;
    n = n/10;
    value+= dig * p;
    p = p * b;
}

return value;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}