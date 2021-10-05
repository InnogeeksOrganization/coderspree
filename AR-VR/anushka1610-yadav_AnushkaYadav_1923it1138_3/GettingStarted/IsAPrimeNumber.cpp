#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char **argv){
    int t,n;
    cin >> t;

    //write your code here
    while(t--)
    {
        cin>>n;
        bool ans = isprime(n);
        if(ans)
        {
            cout<<"prime\n";
        }
        else
        {
            cout<<"not prime\n";
        }
    }
    
}