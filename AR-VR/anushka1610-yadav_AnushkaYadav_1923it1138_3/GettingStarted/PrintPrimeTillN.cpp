#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return -1;
    }
    return n;
}

int main(){
    int low, high;
    cin >> low >> high;

    //write your code here
    for(int i=low;i<=high;i++)
    {
        int ans = isprime(i);
        if(ans != -1)
        {
            cout<<ans<<"\n";
        }
        
    }
    return 0;

}