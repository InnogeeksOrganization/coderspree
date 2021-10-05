#include <iostream>
using namespace std;

bool is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return false;
    }
    
    return true;
}

int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(is_prime(n))
            cout<<"prime\n";
        else
            cout<<"not prime\n";
    }
    
    return 0;
}
