#include<iostream>
using namespace std;
int main(int agrc, char** argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int i, mul=1;
    for(i=1; i<=10; i++)
    {
        mul = n*i;
        cout<< n <<" * "<< i <<" = " << mul<<"";
    }
    
}