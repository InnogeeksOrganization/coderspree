#include<iostream>
using namespace std;
void printDigit (int n)
{
    int x;
    if(n==0)
    {
        return;
    }
    
    x= n%10;
    
    printDigit(n/10);
    
    cout<<x<<endl;
}
int main()
{
    int n;
    cin>>n;
    printDigit(n);
    return 0;
}