#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int count = 0,a;
    while(n>0)
    {
        count++;
        n /= 10;
    }
    cout<<count<<endl;
    return 0;
}