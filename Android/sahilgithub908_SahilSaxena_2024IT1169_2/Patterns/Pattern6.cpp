#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 2; j++) {
      if (i > n / 2)
      {
        if (j <= i - n / 2 || j > n + n / 2 - i)
          cout << "*\t";
        else
          cout << "\t";
      }
      else if (j < ((n / 2) + 1 - i) || j > ((n / 2) + 1 + i))
        cout << "*\t";
      else
        cout << "\t";
    }
    cout << endl;
  }
  return 0;
}
