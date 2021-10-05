#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a=0,b=1,c=0;
    for(int i=0;i<n;i++)
    {
        cout<<a<<endl;
        c=b;
        b=a+b;
        a=c;
    }
    return 0;
    
}