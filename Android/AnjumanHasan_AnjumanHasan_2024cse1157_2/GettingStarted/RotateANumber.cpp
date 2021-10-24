#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int digits(long long n)
{
    int count=0;
    while(n>0)
    {
     n=n/10;
     count++;
    }
    return count;
}
int main(){
long long n,newno=0;
int k,p,rem,x;
cin >> n >> k;
p=digits(n);
if(p==1)
{
    cout << n;
}
else 
    k=k%p;
    if(k<0)
    {
        k=k+p;
    }
while(k--)
{
rem=n%10;
x=n/10;
n=n/10;
newno = rem*pow(10,p-1) + x;
n=newno;
}
cout << newno<< endl;
}