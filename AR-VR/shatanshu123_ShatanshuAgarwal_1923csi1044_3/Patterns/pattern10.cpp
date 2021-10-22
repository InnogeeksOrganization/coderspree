#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int nos = n / 2;
    int nis = -1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= nos; j++){
            cout << ("\t");
        }
        cout << ("*\t");
        for (int j = 1; j <= nis; j++){
            cout << ("\t");
        }
        if (i > 1 && i < n){
            cout << ("*\t");
        }

        cout << endl;

        if (i <= n / 2){
            nos--;
            nis += 2;
        }else{
            nos++;
            nis -= 2;
        }
    }
}
