#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int t, n;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    int count = 0;
    for (int j = 2; j * j <= n; j++) {
      if (n % j == 0) {
        count++;
        break;
      }
    }
    if (count == 0) {
      cout << "prime" << endl;
    }
    else {
      cout << "not prime" << endl;
    }
  }
}