#include <iostream>
using namespace std;

int fib(int n){
    if (n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    int c = 0;
    for(int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << fib(c)<< "\t";
            c++;
        }
        cout << "\n";
    }
    
}