#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int i,m,ctr=0;;
  while(n>0)
  {
      m=n%10;
      n=n/10;
      if(m==d)
      ctr++;
      
  }
  return ctr;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}