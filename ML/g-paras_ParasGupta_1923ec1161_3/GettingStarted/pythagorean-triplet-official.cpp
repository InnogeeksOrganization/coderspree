#include <iostream>
using namespace std;

int check(int a, int b, int c) {
    return (a*a == (b*b + c*c));
}

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    int ans;
    if ((a >= b) && (a >= c))
        ans = check(a, b, c);
    else if ((b >= a) && (b >= c))
        ans = check(b, a, c);
    else
        ans = check(c, a, b);
    (ans) ? cout << "true" : cout << "false";
    
}