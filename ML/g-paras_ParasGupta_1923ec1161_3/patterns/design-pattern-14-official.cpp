#include <iostream>
using namespace std;
int main(int agrc, char **argv)
{
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}