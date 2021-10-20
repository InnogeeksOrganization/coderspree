#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int spaces = 0;
    int stars = n;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= spaces; j++){
            cout << ("\t");
        }
        for (int j = 1; j <= stars; j++){
            cout << ("*\t");
        }
        cout << endl;
        spaces++;
        stars--;
    }
}