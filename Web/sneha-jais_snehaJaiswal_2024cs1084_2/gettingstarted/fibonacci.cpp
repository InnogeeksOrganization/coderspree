#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    //write your code here
    for(int i=2; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}