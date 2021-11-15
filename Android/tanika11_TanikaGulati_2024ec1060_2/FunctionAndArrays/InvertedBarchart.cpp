#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 1; i <= 10; i++) {
    for (int j = 0; j < n; j++) {
      if (a[j] >= i)
        cout << "*\t";
      else
        cout << "\t";
    }
    cout << endl;
  }
}