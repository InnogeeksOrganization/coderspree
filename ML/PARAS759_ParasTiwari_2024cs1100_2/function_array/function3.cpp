#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int r,sum,count=0;
sum=0;
while(n>0)
{
    r=n%10;
    sum=sum+r*pow(b,count);
    count++;
    n=n/10;
}
return sum;
    
}


int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}