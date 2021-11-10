#include<iostream>
using namespace std;
int main()
{
    int n,i,num,c;
    cout<<"Enter N :";
    cin>>n;
    for(num=2;num<=n;num++)
    {
        c=0;
        for(i=2;i<(num/2)+1;i++)
        {
            if(num%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<num<<" Prime\n";
        }
    }
    return 0;
}