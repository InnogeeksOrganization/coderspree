#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int n1=num1,n2=num2,rem;
    while(n1%n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<n2<<"\n"<<num1*num2/n2;

    //write your code here
    
}