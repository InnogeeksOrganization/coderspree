#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = n; i > 0; i--) {
    for (int j = 0; j < i; j++)
      cout << "*\t";
    cout << endl;
  }
  return 0;
}

