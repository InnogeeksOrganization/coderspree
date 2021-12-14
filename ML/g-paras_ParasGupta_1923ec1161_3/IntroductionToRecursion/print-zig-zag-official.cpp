#include <iostream>
using namespace std;

void pzz(int n)
{
    if (n == 1)
    {
        cout << "1 1 1 ";
        return;
    }
    cout << n << " ";
    pzz(n - 1);
    cout << n << " ";
    pzz(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    pzz(n);
}
