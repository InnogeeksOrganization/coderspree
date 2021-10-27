#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int temp1=num1,temp2=num2;
    while(num1%num2 != 0){
        int r = num1 % num2;
        num1=num2;
        num2=r;
        
    }
    int gcd=num2;
    cout<<gcd<<endl;
    int lcm=temp1*temp2/gcd;
    cout<<lcm<<endl;
}