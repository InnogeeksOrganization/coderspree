#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int count=0;
  while(n!=0)
  {
      
      int x= n%10;
      if(x==d)
      {
          count ++;
      }
       n=n/10;
     
      
  }
  return count;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}
