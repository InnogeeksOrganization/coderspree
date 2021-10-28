#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int stars = n / 2 + 1;
    int spaces = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= stars; j++){
            cout << ("*	");
        }
        for (int j = 1; j <= spaces; j++){
            cout << ("	");
        }
        for (int j = 1; j <= stars; j++){
            cout << ("*	");
        }

        cout << endl;
        
        if (i < n / 2 + 1){
            stars--;
            spaces += 2;
        }else{
            stars++;
            spaces -= 2;
        }
    }
}