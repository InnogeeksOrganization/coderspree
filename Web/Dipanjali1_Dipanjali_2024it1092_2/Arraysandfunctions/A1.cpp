#include<iostream>
using namespace std;
int digFreq(int n, int d) 
{ int count=0;
while(n>0)
{
  int r=n%10;
  if(r==d)
  {
      count++;
  }
  n=n/10;
}
return count;
}
int main() 
{
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}