#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n, int b) {
    //write your code here.
    int m,i=0,t=0;
    while(n>0)
    {
        m=n%10;
        n/=10;
        t+=m*(pow(b,i));
        i++;
        
    }
    return t;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}