#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = n; j > 0; j--) {
      if (j > (n - i))
        cout << "\t";
      else
        cout << "*\t";
    }
    cout << endl;
  }
  return 0;
}
