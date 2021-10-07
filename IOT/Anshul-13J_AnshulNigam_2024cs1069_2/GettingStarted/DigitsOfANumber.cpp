#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,dig,rev=0;
    cin >> n;
    while(n)
    {
        dig=n%10;
        n/=10;
        rev= rev*10 + dig;
    }
    while(rev)
    {
        dig=rev%10;
        rev/=10;
        cout<<dig<<endl;
    }
    return 0;
}