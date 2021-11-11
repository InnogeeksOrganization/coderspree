#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter marks:";
    cin>>m;
    if(m>90)
    {
        cout<<"Excellent";
    }
    else if(m>80 && m<=90)
    {
        cout<<"Good";
    }
    else if(m>70 && m<=80)
    {
        cout<<"Fair";
    }
    else if(m>60 && m<=70)
    {
        cout<<"Meets expectations";
    }
    else if(m<=60)
    {
        cout<<"below par";
    }
    return 0;
}