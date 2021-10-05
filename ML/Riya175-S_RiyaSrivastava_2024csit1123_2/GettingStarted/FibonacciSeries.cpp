#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int a, b, c, i;
    
    a=0;
    b=1;
    c = a+b ;
    cout<<"0\n";
    cout<<"1\n";
    for(i=2; i<n; i++)
    {
        cout<<c<<"\n";
        a = b;
        b = c;
        c = a+b;
    }
    return 0;
}