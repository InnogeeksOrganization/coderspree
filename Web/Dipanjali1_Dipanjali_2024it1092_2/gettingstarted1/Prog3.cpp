#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, count = 0;
    cin >> n;
    for (int i = 2; i <= n/2; i++)
    {
      if (n % i == 0)
       { count++;
        break;
       }
    }

    if (count == 0)
      cout << "prime" << "\n";
    else
      cout << "not prime" << "\n";
  }
  return 0;
}