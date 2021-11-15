#include <iostream>
#include <cmath>
using namespace std;
int DecToAny(int n, int b)
{
    int r,rev=0,c=0;
    while(n!=0)
    {
        r=n%10;
        if(r!=0)
        {
        rev=rev+(r*(pow(b,c)));
        c++;
        }
        else
        {
            c++;
        }
        n=n/10;
        
    }
    
   // return c;
   return rev;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}