#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
    int d=0,ans=0;
 while(n>0){
     int r = n%10;
     ans=ans+r*pow(b,d);
     n=n/10;
     d++;
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