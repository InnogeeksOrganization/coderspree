#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
  int r, m = 1, ans = 0;
  while (n != 0)
  {
    r = n % b;
    n=n/b;
    ans = ans + r * m;
    m = m * 10;
    
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
