#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        i++;
    }
}
