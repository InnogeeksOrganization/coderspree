#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int r;
    //write your code here
    while(n!=0)
    {
        r=n%10;
        cout<<r<<"\n";
        n=n/10;
    }
    return 0;
}