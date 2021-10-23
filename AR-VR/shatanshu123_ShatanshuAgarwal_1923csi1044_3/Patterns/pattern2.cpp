#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int nstars = n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= nstars; j++){
            cout << ("*\t");
        }
        nstars--;
        cout << endl;
    }
}