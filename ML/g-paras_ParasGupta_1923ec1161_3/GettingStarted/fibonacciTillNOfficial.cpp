#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    int temp;
    while (n--) {
        cout << a << endl;
        temp = a + b;
        a = b;
        b = temp;
    }
    
}