#include <iostream>
using namespace std;
int digit(int n)
{       
    if (n==0)
    {
    }
    else
    {
        cout << n%10 << endl;
        return digit(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    digit(n);
    return 0;
}
