#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n, k;
  cin >> n;
  while (n != 0) {
    k = n % 10;
    n = n / 10;
    cout << k << endl;
  }
}