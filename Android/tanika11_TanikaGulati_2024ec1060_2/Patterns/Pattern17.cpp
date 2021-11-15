#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
    {
      if (j > n / 2 && j <= n - abs((n / 2) + 1 - i))
        cout << "*\t";
      else if (j <= n / 2 && i == (n / 2) + 1)
        cout << "*\t";
      else
        cout << "\t";
    }
    cout << endl;
  }
  return 0;
}