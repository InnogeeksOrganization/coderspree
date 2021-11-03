#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int bschangedec(int n, int rd)
{
    int sum=0,p=0,r;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*pow(rd,p));
        p++;
        n=n/10;
    }
    return sum;
}
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
    int num,base1,base2,dec;
    cout<<"Enter number in base_A :";
    cin>>num;
    cout<<"Enter base_A :";
    cin>>base1;
    cout<<"Enter base_B :";
    cin>>base2;
    dec=bschangedec(num,base1);
    bschange(dec,base2);
    return 0;
}