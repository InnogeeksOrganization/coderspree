#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void bschange(int n, int rd)
{
    int sum=0,p=0,r;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*pow(rd,p));
        p++;
        n=n/10;
    }
    cout<<"Number in decimal :"<<sum;
}
int main()
{
    int num,base;
    cout<<"Enter number :";
    cin>>num;
    cout<<"Enter base :";
    cin>>base;
    bschange(num,base);
}