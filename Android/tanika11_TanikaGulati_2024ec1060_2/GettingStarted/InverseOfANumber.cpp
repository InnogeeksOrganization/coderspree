#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
  int n, k, ar[10], c = 0;
  cin >> n;
  for (int i = 0; n != 0; i++) {
    c++;
    k = n % 10;
    n = n / 10;
    ar[k - 1] = i + 1;
  }
  for (int i = c - 1; i >= 0; i--)
    cout << ar[i];
}