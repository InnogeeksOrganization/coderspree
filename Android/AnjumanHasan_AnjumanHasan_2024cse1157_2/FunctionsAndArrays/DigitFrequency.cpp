#include<iostream>
using namespace std;
int digFreq(int n, int d) {
 int count = 0,rem;
 while(n>0)
 {
     rem=n%10;
     n=n/10;
     if(rem==d)
     {
         count++;
     }
 }
 return count;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}