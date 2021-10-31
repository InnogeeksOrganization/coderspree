#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int rev, count = 0;
    while (n!= 0)
    {
        rev =n % 10;
        if (rev == d){
            count++;
          }
        n= n/10;
    }
    return count;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}
