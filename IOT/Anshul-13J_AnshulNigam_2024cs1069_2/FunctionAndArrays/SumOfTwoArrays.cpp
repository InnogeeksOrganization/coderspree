#include <iostream>
using namespace std;

int
main ()
{
  int n1, n2, i, j;
  cin >> n1;
  int a[n1];
  for (i = 0; i < n1; i++)
    cin >> a[i];
  cin >> n2;
  int b[n2];
  for (i = 0; i < n2; i++)
    cin >> b[i];
  int max = (n1 > n2) ? n1 : n2;
  int c[max], k = max-1, carry = 0;
  for (i = n1-1, j = n2-1; i >= 0 && j >= 0; i--, j--)
    {
      c[k--] = (a[i] + b[j] + carry) % 10;
      carry = (a[i] + b[j] + carry) / 10;
    }
  while (i >= 0)
    {
      c[k--] = (a[i--]+carry) %10;
      carry = (a[i+1]+carry) /10;
    }
  while (j >= 0)
    {
      c[k--] = (b[j--]+carry) %10;
      carry = (b[j+1]+ carry) /10;
    }
    if(carry==1)
        cout<<carry<<endl;
    for(i=0;i<max;i++)
        cout<<c[i]<<endl;
  return 0;
}