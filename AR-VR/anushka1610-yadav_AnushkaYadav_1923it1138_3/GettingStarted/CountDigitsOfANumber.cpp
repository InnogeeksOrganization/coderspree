#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int c=0,r,d;
    //write your code here
    while(n!=0)
    {
        r = n%10;
        c++;
        n = n/10;
    }
    cout<<c;
    return 0;
}