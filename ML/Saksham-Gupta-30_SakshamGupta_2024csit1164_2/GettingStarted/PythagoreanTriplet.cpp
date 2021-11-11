#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    int large;
    if (a > b && a > c)
    {
        if (b*b + c*c == a*a)
            cout << "true";
        else
            cout << "false";
    }
    else if (b > a && b > c)
    {
        if (a*a + c*c == b*b)
            cout << "true";
        else
            cout << "false";
    }
    else
    {
        if (b*b + a*a == c*c)
            cout << "true";
        else
            cout << "false";
    }
}