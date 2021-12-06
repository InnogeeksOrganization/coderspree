#include <iostream>
using namespace std;

void digit(int n)
{
    if (n == 0)
        return;
    digit(n / 10);
    cout << n % 10 << endl;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    digit(n);
}
