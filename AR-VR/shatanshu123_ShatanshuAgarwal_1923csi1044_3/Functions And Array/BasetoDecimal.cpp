#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
    int power=1,ans=0;
    while(n>0){
        int digit=n%10;
        ans=ans+digit*power;
        n=n/10;
        power=power*b;
    }
    return ans;

}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}