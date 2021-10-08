#include<iostream>
using namespace std;

void printDec(int n) {
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    
    cout << n << endl;
    printDec(n-1);
}

void printInc(int n) {
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    
    printInc(n-1);
    cout << n << endl;
}

void printIncDec(int n){
    // write your code here
    printDec(n);
    printInc(n);
}


int main(){
    int n; cin>>n;
    printIncDec(n);
}
