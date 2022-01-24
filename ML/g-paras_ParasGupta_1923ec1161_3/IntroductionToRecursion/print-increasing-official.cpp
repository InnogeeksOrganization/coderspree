#include <iostream>
using namespace std;

void printIncreasing(int n)
{
    if (n == 0)
        return;
    printIncreasing(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    printIncreasing(n);
}
