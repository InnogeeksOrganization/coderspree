#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  int n;
  cin >> n;
  int a = 0, b = 1, res;
  cout << a << endl << b << endl;
  for (int i = 0; i < n - 2; i++) {
    res = a + b;
    cout << res << endl;
    a = b;
    b = res;
  }
  return 0;
}