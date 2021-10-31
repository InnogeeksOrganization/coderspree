#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
  int k, c = 0, a = 0;
  while (n != 0) {
    k = n % 10;
    n = n / 10;
    a += k * pow(b, c);
    c++;
  }
  return a;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}