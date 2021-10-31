#include<iostream>
using namespace std;

int main()
{
    long long n;
    int freq=0,num;
    cin>>n;
    cin>>num;
    while(n)
    {
        if(n%10 == num)
            freq++;
        n/=10;
    }
    cout<<freq;
    return 0;
}