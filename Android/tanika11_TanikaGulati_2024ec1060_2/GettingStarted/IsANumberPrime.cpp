#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, c = 0;
    cin >> n;
    for (int j = 2; j <= n / 2; j++) {
      if (n % j == 0)
        c = 1;
    }
    if (c == 1)
      cout << "not prime" << endl;
    else
      cout << "prime" << endl;
  }
}