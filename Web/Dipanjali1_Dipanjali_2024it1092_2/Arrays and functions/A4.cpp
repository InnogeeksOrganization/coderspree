#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
  int power = 1;
  double ans = 0;
  while (n > 0) {
    int digit = n % 10;
    ans = ans + digit * power;
    n = n / 10;
    power = power * b;
  }
  return ans;
}

double DecToAny(int n, int b) {
  int power = 1;
  double ans = 0;
  while (n > 0) {
    int digit = n % b;
    ans += digit * power;
    power = power * 10;
    n = n / b;
  }
  return ans;
}
double AnyToAny(int n, int b1, int b2) {
  double temp = AnyToDec(n, b1);
  double ans = DecToAny(temp, b2);
  return ans;
}

int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  double res = AnyToAny(n, b1, b2);
  cout << res << endl;
}