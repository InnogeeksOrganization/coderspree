#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n,i,flag;
    cin >> t;
    while(t--)
    {
        cin>>n;
        for(i=2;i<=n/2;i++)
        {
            if(n==1)
                break;
            flag=1;
            if(n%i==0)
                {
                    flag=0;
                    break;
                }
        }
        if(flag)
            cout<<"prime\n";
        else
            cout<<"not prime\n";
    }
    
}