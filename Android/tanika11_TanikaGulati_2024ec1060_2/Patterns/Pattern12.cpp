#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  int p = 0, q = 1, r;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << p << "\t";
      r = p + q;
      p = q;
      q = r;
    }
    cout << endl;
  }
  return 0;
}