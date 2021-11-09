#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
int multiplier = 0, ans_num = 0;
    while (n > 0) {
      int remainder = n % 10;
      n = n / 10;
      ans_num += remainder * pow(b, multiplier);
      multiplier++;
    }
    return ans_num;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}