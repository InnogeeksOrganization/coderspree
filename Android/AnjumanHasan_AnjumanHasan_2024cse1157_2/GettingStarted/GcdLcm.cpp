#include <iostream>
using namespace std;
int main(){
    int num1, num2,i,x,gcd=1,lcm=1;
    cin >> num1 >> num2;
if(num1>num2)
{
x=num1;
}
else 
{
x=num2;
}
    //write your code here
    for(i=1;i<x;i++)
    {
        if((num1%i==0)&&(num2%i==0))
        {
            gcd =i;
        }
    }
    lcm= (num1*num2)/gcd;
    cout << gcd << "\n" << lcm << endl;
}