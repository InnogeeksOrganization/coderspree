#include<iostream>

using namespace std;




int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;


    int rv = 0;
    int p = 1;
    int c = 0;
    while ( n1 > 0 || n2 > 0 || c > 0) 
    {
      int d1 = n1 % 10; 
      int d2 = n2 % 10;
      int d = d1 + d2 + c;
      c = d / b; 
      d = d % b;
      rv += d * p;
      p *= 10;
      n1 /= 10;
      n2 /= 10;
    }
    cout <<rv<< endl;
}