#include<iostream>
using namespace std;
int digfeq(int num,int d)
{
    int count=0;
    while(num>0)
    {
        if(num%10==d)
            count++;
        num=num/10;
    }
    return count;
}
int main()
{
    int n,dig;
    cout<<"Enter number :";
    cin>>n;
    cout<<"\nEnter digit :";
    cin>>dig;
    cout<<"Frequency of "<<dig<<" is :"<<digfeq(n,dig);
    return 0;
}