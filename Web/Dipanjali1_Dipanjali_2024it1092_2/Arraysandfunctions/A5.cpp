#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
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
int sum=res1+res2;
int power3 = 1;
  int ans = 0;
  while (sum > 0) {
    int digit = sum % b;
    ans += digit * power3;
    power3 = power3 * 10;
    sum = sum / b;
  }


    return ans;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
    return 0;
}