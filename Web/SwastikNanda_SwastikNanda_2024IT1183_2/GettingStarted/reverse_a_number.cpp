#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int a;
    while(n>0){
        cout<<(n%10)<<endl;
        n=n/10;
    }
    return 0;
}