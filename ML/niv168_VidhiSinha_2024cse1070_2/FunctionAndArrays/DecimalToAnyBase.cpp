#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b) {
    int arr[10],i;
    for(i=0;n>0;i++)
    {
        arr[i]=n%b;
        n=n/b;
    }
    for(i=i-1;i>=0;i--)
    {
        
        cout<<arr[i];
    }
}

  
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  DecToAny(n, b);
  
}