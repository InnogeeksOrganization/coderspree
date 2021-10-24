#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int a=0;
    int b=1;
    cout<<a<<"\n"<<b<<"\n";
    int sum;
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        cout<<sum<<"\n";
        a=b;
        b=sum;
    }
    
}