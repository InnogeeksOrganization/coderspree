#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    while(t--) {
        long long int n;
        cin >> n;
        
        int f=0;
        for(long long int i = 2; i<=sqrt(n); i++) {
            if(n%i == 0) {
                f=1;
                break;
            }
        }
        
        if(f == 0)
            cout << "prime" << endl;
        else cout << "not prime" << endl;
        
    }
    
    return 0;
}