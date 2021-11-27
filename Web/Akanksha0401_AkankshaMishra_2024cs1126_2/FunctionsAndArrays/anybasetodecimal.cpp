#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int n;
  int b;
  cin >> n;
  cin >> b; 
  int i=0,digit,sum=0;
  while(n!=0)
  {
      digit=n%10;
      sum+=pow(b,i)*digit;
      n=n/10;
      i++;
  }
 
  cout <<sum  << endl;
}