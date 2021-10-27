#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int hcf=__gcd(num1,num2);
    cout<<hcf<<" ";
    cout<<(num1*num2)/hcf;
    return 0;
}