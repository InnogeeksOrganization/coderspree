#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//  1*str[len-1] + base*str[len-2] + (base)2*str[len-3] + ...
int main(int argc, char **argv)
{
    string number;
    int base, result = 0;
    cin >> number >> base;
    for(int i=1;i<=number.length()-1;i++)
        result += pow(base, i)*(number[number.length()-i]-'0');
    cout << result;
    return 0;
}