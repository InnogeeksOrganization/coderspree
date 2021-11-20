#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int DecToAny(int n, int b) {
int rem,k=0,newn=0;
do
{
    rem=n%b;
    n=n/b;
    newn = newn+rem*pow(10,k);
    k++;
}
while(n>0);
return newn;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}