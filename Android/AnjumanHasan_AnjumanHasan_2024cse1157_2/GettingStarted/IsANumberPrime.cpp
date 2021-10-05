#include <iostream>
using namespace std;
int main(){
    long long t,i,flag;
    cin >> t;
    long long n;
    //write your code here
    while(t--)
    {
        cin >> n;
        flag = 0;
        for ( i = 2; i <= n/2; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout << "not prime";
        }
        else if(flag==0)
        {
            cout << "prime";
        }
        cout << "\n";
    }
}