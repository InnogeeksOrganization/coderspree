#include <iostream>
using namespace std;

int isPT(int a,int b, int c)
{
    if(( a*a + b*b )== c*c )
        return 1;
    return 0;
}

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    if(isPT(a,b,c) || isPT(a,c,b) || isPT(c,b,a) || isPT(c,a,b) || isPT(b,a,c) || isPT(b,c,a))
        cout<<"true";
    else
        cout<<"false";
}