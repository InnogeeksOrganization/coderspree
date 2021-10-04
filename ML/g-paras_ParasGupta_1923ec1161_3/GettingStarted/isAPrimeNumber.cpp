#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    int n;
    while (t--) {
        bool prime = true;
        cin >> n;
        for (int i=2; n > 2 &i<=(n/2+1); i++) {
            if (n%i == 0) prime = false;
        }
        if (prime) cout << "prime" << endl;
        else cout << "not prime" << endl;
    }
    
}