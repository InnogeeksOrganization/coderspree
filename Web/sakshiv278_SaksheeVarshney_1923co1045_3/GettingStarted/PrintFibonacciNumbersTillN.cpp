#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  int n, a, b, c,i;
  cin >> n;
  a = 0, b = 1;
  for (i = 0; i < n; i++) {
    cout << a << endl;
    c = a + b;
    a = b;
    b = c;
  }

}