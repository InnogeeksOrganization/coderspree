
#include <iostream>

using namespace std;

int main()
{
    int num;
    int a = 0;

   
    cin >> num;
    cout << "\n";

    for (int i = 1; num > 0; i++) {
        a = num % 10;
        cout << a<<endl;
        num = num / 10;
    }

    return 0;
}
