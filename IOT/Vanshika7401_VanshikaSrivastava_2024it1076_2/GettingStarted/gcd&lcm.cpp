#include <iostream>
using namespace std;

int main() {
  int a, b, x, y, t, gcd, lcm;

 
  cin>>x>>y;

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  cout<<gcd<<endl;
  cout<<lcm;

  return 0;
}