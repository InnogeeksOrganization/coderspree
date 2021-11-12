#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number :";
    cin>>num;
    int i,c=0;
    for(i=2;i<(num/2)+1;i++)
    {
        if(num%i==0)
        {
            c=1;
            cout<<"Not Prime";
            break;
        }
    }
    if(c==0)
    {
        cout<<"Prime";
    }
    return 0;
}