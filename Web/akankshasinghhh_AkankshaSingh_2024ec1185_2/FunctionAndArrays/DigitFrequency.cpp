#include<iostream>
using namespace std;
int digFreq(int n, int d) {
    int c=0;
    for(int i=n;i>0;i=i/10)
    {
        if(i%10==d)
        c++;
    }
    return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}
