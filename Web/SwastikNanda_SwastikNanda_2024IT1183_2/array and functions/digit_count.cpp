#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int temp=0;
  int count=0;
  while(n!=0){
      temp=n%10;
      n=n/10;
      if(temp==d){
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