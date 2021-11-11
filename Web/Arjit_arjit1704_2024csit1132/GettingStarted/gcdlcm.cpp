#include <iostream>
using namespace std;
int main()  
{  
    int num1, num2, lcm, gcd, temp;  
    cin >> num1;  
    cin >> num2;  
    int a = num1;  
    int b = num2;     
    while (num2 != 0)  
    {  
        temp = num2;  
        num2 = num1 % num2;  
        num1 = temp;  
    }  
    gcd = num1;  
    lcm = (a * b) / gcd;  
    cout <<gcd<<endl<<lcm;  
    return 0;  
}