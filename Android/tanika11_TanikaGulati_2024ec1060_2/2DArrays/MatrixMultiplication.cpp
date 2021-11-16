#include <iostream>
using namespace std;
int main() {
  int n1, m1, n2, m2;
  cin >> n1 >> m1;
  int a[n1][m1];
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m1; j++)
      cin >> a[i][j];
  }
  cin >> n2 >> m2;
  int b[n2][m2];
  for (int i = 0; i < n2; i++) {
    for (int j = 0; j < m2; j++)
      cin >> b[i][j];
  }
  if (n2 != m1)
    cout << "Invalid input";
  else {
    int res[n1][m2];
    for (int i = 0; i < n1; i++) {
      for (int j = 0; j < m2; j++) {
        res[i][j] = 0;
        for (int c = 0; c < n2; c++)
          res[i][j] += a[i][c] * b[c][j];
        cout << res[i][j] << " ";
      }
      cout << endl;
    }
  }
}