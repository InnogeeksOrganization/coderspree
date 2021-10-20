#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a,b,c;
    cin >> a >> b >> c;
    
    //write your code here
    if((a*a + b*b) == (c*c))
    {
        cout<<"true";
    }
    else if(a*a+c*c == b*b)
    {
        cout<<"true";
    }
    else if(b*b + c*c == a*a)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}