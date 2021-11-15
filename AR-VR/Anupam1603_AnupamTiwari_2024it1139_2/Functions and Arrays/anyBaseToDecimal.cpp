#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
int ans=0,m=1,r;
while(n!=0)
{
    r=n%10;
    n=n/10;
    ans =ans +r*m;
    m=m*b;
}
return ans;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}
