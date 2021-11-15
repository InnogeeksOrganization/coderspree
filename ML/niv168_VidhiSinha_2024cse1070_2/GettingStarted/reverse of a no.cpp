#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,d;
    cin >> n;
    while(n>0)
    {
        d=n%10;
        cout<<d<<endl;
        n=n/10;
    }

}
