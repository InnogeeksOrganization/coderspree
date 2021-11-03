#include <iostream>
using namespace std;
const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }
}
int main(int argc, char** argv)
{
  int mat[mr][mc] = {0};
  int n, m;
  cin >> n >> m;
  inputBound(mat, n, m);

  int c, k = 0;
  for (int i = 0; i < (n + 1) / 2; i++) {
    c = 1;
    if (c == 1 && k < m * n) {
      for (int j = i; j < n - i; j++) {
        cout << mat[j][i] << endl;
        k++;
      }
      c++;
    }
    if (c == 2 && k < m * n) {
      for (int j = i + 1; j < m - i; j++) {
        cout << mat[n - i - 1][j] << endl;
        k++;
      }
      if (i != ((n + 1) / 2) - 1 || n % 2 == 0)
        c++;
    }
    if (c == 3 && k < m * n) {
      for (int j = n - i - 1; j > i; j--) {
        cout << mat[j - 1][m - i - 1] << endl;
        k++;
      }
      if (i != ((n + 1) / 2) - 1 || n % 2 == 0)
        c++;
    }
    if (c == 4 && k <= m * n)
      for (int j = m - i - 1; j > i + 1; j--) {
        cout << mat[i][j - 1] << endl;
        k++;
      }
  }
  return 0;
}