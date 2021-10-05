#include <iostream>
using namespace std;
void isprime(int n)
{
    int divs = 2;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            divs++;
    if(divs>2)
        cout<<"not prime"<<endl;
    else
        cout<<"prime"<<endl;
}
int main(int argc, char **argv){
    int t, n;
    cin >> t;
    while(t--)
    {
        cin>>n;
        isprime(n);
    }
    //write your code here
    
}