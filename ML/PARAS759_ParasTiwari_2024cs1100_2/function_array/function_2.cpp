#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
//write your code here
int i,a[1000];
while(n>0)
{
    //cout<<n%b;
    a[i]=n%b;
    i++;
    n=n/b;
}
for(int k=1;k<=i;k++)
{
    cout<<a[i-k];
}
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  DecToAny(n, b);
  /*cout << res << endl;*/
  
}