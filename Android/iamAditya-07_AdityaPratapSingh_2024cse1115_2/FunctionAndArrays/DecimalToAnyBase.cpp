#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
  int value=0;
  int p=1;
  
  while(n>0){
      int dig=n % b;
      n=n/b;
      
      value+=dig * p;
      p = p * 10;
  }
  
  
  return value;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
  
 

  
 
}