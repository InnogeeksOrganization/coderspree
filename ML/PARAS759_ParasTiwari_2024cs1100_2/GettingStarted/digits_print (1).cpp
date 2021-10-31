#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int power = 1;
    int temp = n;
    while (temp >= 10){
        temp /= 10;
        power *= 10;
    }

    temp = n;
    while (power != 0){
        int digit = temp / power;
        cout << (digit) << endl;

        temp = temp % power;
        power = power / 10;
    }
}

