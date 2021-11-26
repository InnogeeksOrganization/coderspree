#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int n, k;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    k = 0;
    for (int j = 1; j <= (n * 2) - 1; j++) {
      if (j > n)
        k--;
      else
        k++;
      if (j <= i || j >= (n * 2) - i)
        cout << k << "\t";
      else
        cout << "\t";
    }
    cout << endl;
  }
}