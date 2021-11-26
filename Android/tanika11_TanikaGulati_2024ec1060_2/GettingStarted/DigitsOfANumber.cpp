#include <iostream>
using namespace std;

int main() {
  int n, k, a[10], i = 0;
  cin >> n;
  while (n != 0) {
    a[i] = n % 10;
    n = n / 10;
    i++;
  }
  k = sizeof(a);
  for (int x = i; x > 0; x--)
    cout << a[x - 1] << endl;
}