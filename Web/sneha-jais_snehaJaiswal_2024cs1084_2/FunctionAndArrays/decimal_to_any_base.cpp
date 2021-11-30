#include<iostream>
using namespace std;
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
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  DecToAny(n, b);
 
}