#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
  int ans = 0, multiplier = 1;
  while (n > 0) {
    int remainder = n%b;
    n=n/b;
    ans = ans + remainder*multiplier;
    multiplier *= 10;
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