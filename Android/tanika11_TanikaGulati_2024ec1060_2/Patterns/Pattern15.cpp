#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int n, k, c;
  cin >> n;
  for (int i = 0; i < n; i++) {
    k = abs(n / 2 - i);
    c = (n / 2) - k;
    for (int j = 0; j < n - k; j++) {
      if (j < k)
        cout << "\t";
      else if (j > n / 2) {
        c--;
        cout << c << "\t";
      }
      else {
        c++;
        cout << c << "\t";
      }
    }
    cout << endl;
  }
}