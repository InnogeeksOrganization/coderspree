#include <iostream>
using namespace std;

int main()
{
  int a = 0, b = 1, c, i, n;
  cin >> n;
  cout << a << "\n" << b << "\n";
  c = a + b;
  cout << c << "\n";
  for (i = 3; i < n; i++)
  {
    a = b;
    b = c;
    c = a + b;
    cout << c << "\n";
  }
  return 0;

}