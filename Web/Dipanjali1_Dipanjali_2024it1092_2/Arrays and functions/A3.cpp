#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) 
{ int r,p,sum=0,i=0;
while(n>0)
{ 
    r=n%10;
    
    n=n/10;
p=(r*pow(b,i));
i++;
sum=sum+p;

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