#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b) {
//write your code here
int m,t,i=0;
t=0;
while(n>0)
{
    m=n%b;
    n/=b;
    t+=pow(10,i)*m;
    i++;
}
return t;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}