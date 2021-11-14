#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
    int ans=0;
    int p=1;
    while(n>0){
        int r=n%b;
        ans+= r*p;
        p*=10;
        n=n/b;
    }
  return ans; 
    
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}