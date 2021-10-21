#include <iostream>
#include<cmath>
using namespace std;
int size(int num)
{
    int count=0;
    while(num)
    {
        num/=10;
        count++;
    }
    return count;
}
int main(){
    int n,k,t;
    cin>>n>>k;
    if(k>0){
        while(k--)
        {
            t=n%10;
            n=n/10;
            n= t* pow(10,size(n)) + n;
        }
    }
    else{
        int rev=0;
        while(n)
        {
            t=n%10;
            n=n/10;
            rev = rev*10 + t;
        }
        n=rev;
        while(k++)
        {
            t=n%10;
            n=n/10;
            n= t* pow(10,size(n)) + n;
        }
        rev=0;
        while(n)
        {
            t=n%10;
            n=n/10;
            rev = rev*10 + t;
        }
        n=rev;
    }
    cout<<n;
}