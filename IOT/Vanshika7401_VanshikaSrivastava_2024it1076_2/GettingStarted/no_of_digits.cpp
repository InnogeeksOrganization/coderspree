#include <iostream>
using namespace std;

int main()
{
   

    //variable declaration
    int n, n1, num = 0;

    
    cin >> n;

    n1 = n;

    
    while (n != 0)
    {
        n /= 10; 
        num++; 
    }

    cout << num;
   

    return 0;
}