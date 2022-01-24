#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int x,res=0,k=0;
while(n>0){
    x=n%10;
    res=res+x*(pow(b,k));
    k++;
    n=n/10;
}
return res;
}

int DecToAny(int n, int b) {
//write your code here

int a[100],i=0;
while(n>0){
    a[i]=n%b;
    n=n/b;
    i++;
}
for(int j=i-1;j>=0;j--){    
cout<<a[j];
}
return 0;
}
int AnyToAny(int n, int b1, int b2) {
  //write your code here
  int dec= AnyToDec(n, b1);
  int ans= DecToAny(dec, b2);
  return ans;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
AnyToAny(n, b1, b2);
 
}