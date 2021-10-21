#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int i, temp = n, rem, count = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        if (rem == d)
            count++;
        temp = temp - rem;
        temp = temp / 10;
    }
    cout << count;
}