#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int div = 2;
        while (div * div <= n){
            if (n % div == 0){
                break;
            }
            div++;
        }

        if (div * div > n){
            cout << ("prime") << endl;
        }
        else{
            cout << ("not prime") << endl;
        }
    }
}
