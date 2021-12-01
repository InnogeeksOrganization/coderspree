#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == n / 2 || i == n / 2)
        cout << "*\t";
      else if (i < n / 2) {
        if ((i == 0 && j < n / 2) || j == n - 1)
          cout << "*\t";
        else
          cout << "\t";
      }
      else {
        if (j == 0 || (j > n / 2 && i == n - 1))
          cout << "*\t";
        else
          cout << "\t";
      }
    }
    cout << endl;
  }
}