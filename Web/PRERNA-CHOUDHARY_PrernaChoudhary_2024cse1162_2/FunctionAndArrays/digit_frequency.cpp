#include<iostream>
using namespace std;
int digFreq(int n, int d) {
    
    int freq,rem,temp;
    while(n>0)
    {
        rem=n%10;
        if(rem==d)
        {
            freq++;
        }
        n=n/10;
    }
   return freq;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}