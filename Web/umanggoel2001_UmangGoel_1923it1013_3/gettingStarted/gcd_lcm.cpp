#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int temp1=num1;
    int temp2=num2;
    
    while(num1%num2!=0)
{
    int rem=num1%num2;
    num1=num2;
    num2=rem;
    
}
int gcd=num2;
int lcm=(temp1*temp2)/gcd;

cout<<gcd<<endl<<lcm;
    //write your code here
    
}