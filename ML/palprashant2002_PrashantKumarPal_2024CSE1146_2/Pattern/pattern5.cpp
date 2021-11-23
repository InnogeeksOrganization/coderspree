#include<iostream>
using namespace std;
void spa(int k)
{
    int l;
    for(l=0;l<k;l++)
    {
        cout<<"  ";
    }
}
void ast(int k)
{
    int l;
    for(l=0;l<k;l++)
    {
        cout<<"* ";
    }
}
int main()
{
    int i,n,m=1,h,r;
    cout<<"Enter value of N :";
    cin>>h;
    r=h/2;
    n=r;
    cout<<"\n";
    for(i=0;i<=h;i++)
    {
        spa(n);
        ast(m);
        cout<<"\n";
        if(i>=r)
        {
            n++;
        }
        else{
            n--;
        }
        if(i>=r)
        {
            m=m-2;
        }
        else{
            m=m+2;
        }
    }
    return 0;
}