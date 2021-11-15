#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int* arr = new int[n];
  for (int i = 0 ; i < n; i++)
    cin >> arr[i];

  int data, k = -1, c = 0;
  cin >> data;
  for (int i = 0; i < n; i++) {
    if (arr[i] == data) {
      k = i;
      c++;
    }
    if (c == 1) {
      cout << i << endl;
      c++;
    }
  }
  if (c == 0)
    cout << -1 << endl;
  cout << k;
  return 0;
}