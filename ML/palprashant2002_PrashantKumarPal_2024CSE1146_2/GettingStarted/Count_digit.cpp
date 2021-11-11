#include<iostream>
using namespace std;
int main()
{
    int count=0,num,r;
    cout<<"Enter number :";
    cin>>num;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    cout<<"Number of digits :"<<count;
    return 0;
}