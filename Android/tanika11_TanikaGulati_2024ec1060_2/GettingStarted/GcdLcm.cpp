#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2 ,g=0,l=0;
    cin >> num1 >> num2;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        g=i;
    }
    cout<<g<<endl;
    l=(num1*num2)/g;
    cout<<l;
    //write your code here
}