#include <bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int x,res=0,k=0;
while(n>0){
    x=n%10;
    res=res+x*(pow(b,k));
    k++;
    n=n/10;
}
return res;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}