#include<iostream>
using namespace std;
int digFreq(int n, int d) {
    int w;
    int c=0;
    while(n>0)
    {
        
        w=n%10;
        if(w==d)
        {
            c=c+1;
        }
        n=n/10;
    }
  return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}