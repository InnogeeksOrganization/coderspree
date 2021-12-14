#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int count=0;
  int k;
  while(n>=10)
  {
      k=n%10;
      n=n/10;
      if(k==d)
      count++;
  }
  if(n==d)
  count++;
  return count;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}
