#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Enetr nth number :";
    cin>>j;
    cout<<"\nPrime Number :";
    for(num=1;num<=j;num++)
    {
    for(i=2;i<=(num/2);i++)
    {
        if((num%i)==0)
        {
            break;
        }
    }
    if(i==(num/2)+1)
    {
        cout<<num<<' ';
    }
    }
    return 0;
}