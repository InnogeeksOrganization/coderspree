#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int gcd, lcm, rem, num, den;
    if(num1 > num2)
    {
        num = num1;
        den = num2;
    }
    else if(num2 > num1)
    {
        num = num2;
        den = num1;
    }
    rem = num % den;
    while(rem!=0)
    {
        num = den;
        den = rem;
        rem = num % den;
    }
    gcd = den;
    lcm = num1*num2/gcd;
    cout<<gcd;
    cout<<"\n"<<lcm;
}