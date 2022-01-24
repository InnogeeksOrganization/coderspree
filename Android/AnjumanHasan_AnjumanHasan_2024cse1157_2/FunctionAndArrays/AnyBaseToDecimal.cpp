#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
int k=0,newn=0,rem;
while(n>0)
{
rem=n%10;
n=n/10;
newn = newn + rem*pow(b,k);
k++;
}
return newn;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}