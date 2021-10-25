#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,count=0;
    cin >> n;
    while(n)
    {
        n=n/10;
        count++;
    }
    cout<<count;
    return 0;
}