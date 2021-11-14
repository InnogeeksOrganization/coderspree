#include <iostream>
using namespace std;

long long gcd(int a ,int b)
{
    if(b==0)
    return a;
    
    return gcd(b,a%b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

   int hcf= gcd(num1,num2);
   int lc = lcm(num1 , num2);
   
   cout<<hcf<<endl;
   cout<<lc<<endl;
    //write your code here
    
}