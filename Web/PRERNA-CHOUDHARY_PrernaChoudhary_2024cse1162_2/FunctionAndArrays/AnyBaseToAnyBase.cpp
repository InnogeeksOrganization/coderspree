#include<iostream>
#include<math.h>
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
int main()
{
  int n,digit,i=0,sum=0;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
 while(n!=0)
  {
      digit=n%10;
      sum+=pow(b1,i)*digit;
      n=n/10;
      i++;
  }
  n=sum;
//   cout<<n<<"\n";
   DecToAny(n, b2);
 
}