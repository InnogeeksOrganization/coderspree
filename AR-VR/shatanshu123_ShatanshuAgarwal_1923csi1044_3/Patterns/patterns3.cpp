#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int nspaces = n - 1;
    int nstars = 1;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= nspaces; j++){
            cout << ("\t");
        }

        for (int j = 1; j <= nstars; j++){
            cout << ("*\t");
        }

        nspaces--;
        nstars++;
        cout << endl;
    }
}