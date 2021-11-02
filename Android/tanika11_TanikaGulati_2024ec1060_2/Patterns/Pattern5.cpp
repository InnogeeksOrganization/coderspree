#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  int c = n / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= n - (abs(c - i)); j++) {
      if (j < abs(c - i))
        cout << "\t";
      else
        cout << "*\t";
    }
    cout << endl;
  }
}