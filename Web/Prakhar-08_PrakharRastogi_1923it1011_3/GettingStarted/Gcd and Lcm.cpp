#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int a = __gcd(num1, num2);
    int b = (num1*num2)/a;
    
    cout << a << "\n" << b << endl;
    return 0;
}