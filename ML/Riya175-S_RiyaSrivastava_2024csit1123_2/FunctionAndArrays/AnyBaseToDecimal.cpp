#include<iostream>
#include <math.h>
using namespace std;
int AnyToDec(int n, int b) 
{
    //write your code here.
    int sum=0, arr[20], i=0,j; 
    while(n!=0)
    {
        arr[i] = n%10;
        n = n/10;
        i++;
    }
    for(j=0; j<=i; j++)
    {
        sum = sum + pow(b,j)*arr[j];
    }
    return sum;
}
int main() 
{
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}