#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int d;
    
    while(n>0){
        n /= 10;
        d++;
    }
    
    cout<<d;
    
}
