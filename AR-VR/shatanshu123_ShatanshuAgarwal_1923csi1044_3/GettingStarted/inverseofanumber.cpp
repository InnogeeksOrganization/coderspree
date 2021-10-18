#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
  int n,temp,total=0;
  cin >> n;
  temp=n;
  while(temp>0){
      temp/=10;
      total++;
  }
  int i=0;
  int p=total;
  while(n>0){
      int digit =n%10;
      n=n/10;
      i+=p*pow(10,total-digit);
      p--;
  }
  cout<<i;


}