#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int low, high;
  cin >> low >> high;
  while (low < high) {
    int c = 0;
    if (low == 2)
      cout << "2" << endl;
    if (low % 2 == 0)
      low++;
    for (int i = 3; i * i <= low; i++) {
      if (low % i == 0) {
        c = 1;
        break;
      }
    }
    if (c == 0)
      cout << low << endl;
    low += 2;
  }
  return 0;
}