#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int d,c,m;
c=m=0;
while(n>0)
{
    d=n%10;
    c=c+(d*pow(b,m));
    n=n/10;
    m=m+1;
}
return c;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}