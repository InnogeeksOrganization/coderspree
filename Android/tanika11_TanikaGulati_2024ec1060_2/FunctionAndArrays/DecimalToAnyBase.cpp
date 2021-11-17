#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
  int ar[10], k, c = 0;
  while (n != 0) {
    k = n % b;
    ar[c] = k;
    c++;
    n = n / b;
  }
  for (int i = c - 1; i >= 0; i--)
    cout << ar[i];
  return 0;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  DecToAny(n, b);
}
