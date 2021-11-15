#include<iostream>
using namespace std;

void printIncreasing(int n){
    // write your code here
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    
    printIncreasing(n-1);
    cout << n << endl;
    
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
