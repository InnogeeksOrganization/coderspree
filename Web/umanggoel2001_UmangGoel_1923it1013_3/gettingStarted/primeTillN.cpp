//this programs prints the n prime numbers
#include<bits/stdc++.h>
using namespace std;
int main() {
  int low, high, count;
  cin >> low >> high;
  for (int i = low; i <= high; i++) {
    count = 0;
    for (int j = 2; j*j<=i; j++) {
      if (i % j == 0) {
        count++;
        break;
      }
    }
    if (count == 0) {
      cout << i << endl;
    }

  }
  return 0;
}
