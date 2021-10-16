#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n,a=0,b=1,c;
    cin >> n;
    cout<<a<<endl<<b<<endl;
    c=a+b;
    for(int i=3;i<=n;i++)
    {
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
    
}