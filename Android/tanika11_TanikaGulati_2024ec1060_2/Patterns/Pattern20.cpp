#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == 0 || j == n - 1)
        cout << "*\t";
      else if (i >= n / 2 && i < n - 1) {
        if (j == i || j == n - i - 1)
          cout << "*\t";
        else
          cout << "\t";
      }
      else
        cout << "\t";
    }
    cout << endl;
  }
}