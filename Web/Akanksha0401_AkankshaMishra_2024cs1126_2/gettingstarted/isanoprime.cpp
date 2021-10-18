#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv)
{
    int t,n,count;
    cin >> t;
    while(t--)
    { 
        count=2;
        cin>>n;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            count++;
        }
        if(count==2)
        cout<<"prime\n";
        else
        cout<<"not prime\n";
    }
    
return 0;
}