#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int c = 0, k;
  while (n != 0)
  {
    k = n % 10;
    if (k == d)
      c++;
    n = n / 10;
  }
  return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}