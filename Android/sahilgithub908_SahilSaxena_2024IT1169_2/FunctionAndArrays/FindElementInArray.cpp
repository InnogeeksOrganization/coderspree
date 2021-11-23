#include<iostream>
using namespace std;

int main() {
  int n, c = -1;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
    cin >> ar[i];
  int d;
  cin >> d;
  for (int i = 0; i < n; i++) {
    if (ar[i] == d)
      c = i;
  }
  cout << c;
  return 0;
}
