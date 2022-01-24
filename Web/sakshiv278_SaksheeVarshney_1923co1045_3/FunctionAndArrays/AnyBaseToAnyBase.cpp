#include<iostream>
#include<math.h>
using namespace std;
int anytodec(int n,int b){
    int ans=0;
    int p=0;
    while(n>0){
      int r = n%10;
      ans+=(r*pow(b,p));
      p++;
      n/=10;
    }
    return ans;
}
int dectoany(int n,int b){
    int ans=0;
    int p=1;
    while(n>0){
      int r = n%b;
      ans+=(r*p);
      p*=10;
      n/=b;
    }
    return ans;
}
int AnyToAny(int n, int b1, int b2) {
 int d,ans;
 d=anytodec(n,b1);
 ans=dectoany(d,b2);
 return ans;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
}