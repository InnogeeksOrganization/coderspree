#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c,d,e,f;
    cin >> a >> b >> c;
    d=a*a;
    e=b*b;
    f=c*c;
    if((d+e==f)||(e+f==d)||(d+f==e))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }



}
