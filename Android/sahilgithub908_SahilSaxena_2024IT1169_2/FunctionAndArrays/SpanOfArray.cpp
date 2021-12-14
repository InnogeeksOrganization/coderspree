#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
    cin >> ar[i];
  int max = ar[0], min = ar[0];
  for (int i = 1; i < n; i++) {
    if (ar[i] < min)
      min = ar[i];
    if (ar[i] > max)
      max = ar[i];
  }
  cout << max - min;
  return 0;
}
