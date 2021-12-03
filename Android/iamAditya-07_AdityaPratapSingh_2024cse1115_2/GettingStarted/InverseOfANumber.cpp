#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  int inverted=0;
  int power=1;
  
  while(n>0){
      int digit=n%10;
      n=n/10;
      inverted+=power*pow(10,digit-1);
      power++;
  }
  cout<<inverted;
  cout<<"\n";
    
}