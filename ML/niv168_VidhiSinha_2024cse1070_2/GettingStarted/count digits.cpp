#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,c,d;
    c=0;
    cin >> n;
    while(n>0)
    {
        d=n%10;
        c=c+1;
        n=n/10;
    }
    cout<<c;



}
