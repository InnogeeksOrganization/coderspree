#include<iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int a[n * m];
  for (int i = 0; i < n * m; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++) {
    if (i % 2 != 0)
      for (int j = (m * n) - m + i; j >= 0; j -= m)
        cout << a[j] << endl;
    else
      for (int j = i; j < n * m; j = j + m)
        cout << a[j] << endl;
  }
  cout << endl;
}