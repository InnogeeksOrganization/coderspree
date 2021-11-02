#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    k = (abs((n / 2) - i));
    for (int j = 0; j <= n - k - 1; j++) {
      if (j == k || j == n - k - 1)
        cout << "*" << "\t";
      else
        cout << "\t";
    }
    cout << endl;
  }
}