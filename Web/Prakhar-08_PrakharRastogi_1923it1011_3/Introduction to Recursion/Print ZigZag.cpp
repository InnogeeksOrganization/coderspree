#include<iostream>
using namespace std;


void pzz(int n){
    // write your code here
    if(n == 1)
    {
        for(int i=0; i<3; i++)
            cout << 1 << " ";
        return;
    }
    
   
    for(int i=0; i<2; i++) {
        cout << n << " ";
        pzz(n-1);
    }
    cout << n << " ";
}

int main(){
    int n; cin>>n;
    pzz(n);
}
