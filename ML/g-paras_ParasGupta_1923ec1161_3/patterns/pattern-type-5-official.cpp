#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int i=0; i<n/2; i++){
        for (int j=i; j<n/2; j++){
            cout << "\t";
        }
        for (int j=0; j<2*i+1; j++){
            cout << "*\t";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++){
        cout << "*\t";
    }
    cout << endl;
    for (int i=n/2-1; i>=0; i--){
        for (int j=i; j<n/2; j++){
            cout << "\t";
        }
        for (int j=0; j<2*i+1; j++){
            cout << "*\t";
        }
        cout << endl;
    }
}