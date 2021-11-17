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
    int i,m,n=1,h,r;
    cout<<"Enter odd value of N only :";
    cin>>h;
    r=h/2;
    m=r;
    cout<<"\n";
    for(i=0;i<h;i++)
    {
        ast(m);
        spa(n);
        ast(m);
        cout<<"\n";
        if(i>=r)
        {
            n=n-2;
        }
        else{
            n=n+2;
        }
        if(i>=r)
        {
            m=m+1;
        }
        else{
            m=m-1;
        }
    }
    return 0;
}