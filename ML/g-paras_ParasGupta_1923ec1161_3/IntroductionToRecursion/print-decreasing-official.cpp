#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printDecreasing(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printDecreasing(n);
}
