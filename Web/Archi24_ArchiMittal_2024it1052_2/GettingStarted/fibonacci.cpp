#include <iostream>
using namespace std;
void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;
 
    if (n < 1)
        return;
    cout << f1 <<endl;
    for (i = 1; i < n; i++) {
        cout << f2 << endl;
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
 
// Driver Code
int main()
{
    int n;
    cin>>n;
    printFibonacciNumbers(n);
    return 0;
}
 
    