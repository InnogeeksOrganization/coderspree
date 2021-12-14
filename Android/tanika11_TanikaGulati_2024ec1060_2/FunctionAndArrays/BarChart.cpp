#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n], max = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > max)
      max = a[i];
  }
  for (int i = 0; i < max; i++) {
    for (int j = 0; j < n; j++) {
      if (i >= max - a[j])
        cout << "*\t";
      else
        cout << "\t";
    }
    cout << endl;
  }
}