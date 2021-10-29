#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= n - i; j++) {
      if (j == n - i)
        cout << "*";
      else
        cout << "\t";
    }
    cout << endl;
  }
  return 0;
}
