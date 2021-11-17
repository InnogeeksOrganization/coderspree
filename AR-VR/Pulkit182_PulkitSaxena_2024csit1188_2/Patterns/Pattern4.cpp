#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    cin >> n;
    int k = 2 * n - 2;


    for (i = n; i > 0; i--) {


        for (j = 0; j < n-i; j++)
            cout << "	";

        k = k - 2;

        for (int j = 0; j < i; j++) {

            cout << "*	";
        }


        cout << endl;
    }
}
