#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int t=0,f=0,s=1;
    cout<<f<<"\n"<<s<<"\n";
    n = n-2;
    //write your code here
    while(n--)
    {
        t = f+s;
        cout<<t<<"\n";
        f=s;
        s=t;
    }
    return 0;
}