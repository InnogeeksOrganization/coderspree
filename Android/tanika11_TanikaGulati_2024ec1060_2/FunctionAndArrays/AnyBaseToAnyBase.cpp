#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void AnyToAny(int n, int b1, int b2) {
  int rem, dec = 0, i = 0, r, ar[10];
  while (n != 0) {
    rem = n % 10;
    n = n / 10;
    dec += (rem * pow(b1, i));
    i++;
  }
  i = 0;
  while (dec != 0) {
    r = dec % b2;
    dec = dec / b2;
    ar[i] = r;
    i++;
  }
  for (r = i; r > 0; r--)
    cout << ar[r - 1];
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  AnyToAny(n, b1, b2);
}