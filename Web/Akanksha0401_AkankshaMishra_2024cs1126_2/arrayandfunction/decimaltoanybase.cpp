#include<iostream>
using namespace std;
void DecToAny(int n, int b) {
    if(n==0)
    return;
    int num=n%b;
    n=n/b;
    DecToAny(n,b);
    cout<<num;
//write your code here
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
   DecToAny(n, b);
//   cout << res << endl;
}