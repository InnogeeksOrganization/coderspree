#include<iostream>
#include<sstream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
void sum(int n1,int n2,int b)
{
    int r1,r2,c=0;
    string res="",ch;
    while((n1>0)||(n2>0))
    {
        stringstream ss;
        r1=n1%10;
        r2=n2%10;
        if(r1+r2+c>=b)
        {
            ss<<((r1+r2+c)%b);
            ss>>ch;
            res.append(ch);
            c=1;
        }
        else
        {
            ss<<(r1+r2+c);
            ss>>ch;
            res.append(ch);
            c=0;
        }
        n1=n1/10;
        n2=n2/10;
    }
    if(c!=0)
    {   stringstream ss;
        ss<<c;
        ss>>ch;
        res.append(ch);
    }
    reverse(res.begin(),res.end());
    cout<<res;
}
int main()
{
    int num1,num2,base;
    cout<<"Enter base: ";
    cin>>base; 
    cout<<"Enter number 1 :";
    cin>>num1;
    cout<<"Enter number 2 :";
    cin>>num2;
    sum(num1,num2,base);
    return 0;
}