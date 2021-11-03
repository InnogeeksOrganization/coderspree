#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void bschange(int n,int rd)
{
    int temp=0,num=0;
   
    string ans="",ch;
    while(n>0)
    {
        stringstream ss;
        ss<<n%rd;
        ss>>ch;
        ans.append(ch);
        n=n/rd;
    }
    reverse(ans.begin(),ans.end());
    cout<<"Number in base "<<rd<<" is :"<<ans<<endl;  
}
int main()
{
    int number,base;
    cout<<"Enter number in deciaml :";
    cin>>number;
    cout<<"Enter base :";
    cin>>base;
    bschange(number,base);
    return 0;
}