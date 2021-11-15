#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2){
     int  power1=1;
   int res1=0;


while(n1>0){
res1=res1+(n1%10)*power1;
power1=power1*b;
n1=n1/10;
}
int  power2=1;
   int res2=0;


while(n2>0){
res2=res2+(n2%10)*power2;
power2=power2*b;
n2=n2/10;
}
int diff=res2-res1;
int power3 = 1;
  int ans = 0;
  while (diff > 0) {
    int digit = diff % b;
    ans += digit * power3;
    power3 = power3 * 10;
    diff = diff / b;
  }


    return ans;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
   cout<< getDifference(b,n1,n2);
   return 0;
}
