#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n, i, j;
  cin >> n;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (i == j || i + j == n+1) {
        cout << "*	";
      }
      else {
        cout << "	";
      }
    }
    cout << endl;
  }

}