#include <iostream>
using namespace std;
int isPrime(int n)
{
    int i;
    if(n==1 || n==0)
        return 0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(int argc, char **argv){
    int low, high,i;
    cin >> low >> high;
    for(;low<=high;low++)
    {
        if(isPrime(low))
        {
            cout<<low<<" ";
        }
    }
    return 0;
}