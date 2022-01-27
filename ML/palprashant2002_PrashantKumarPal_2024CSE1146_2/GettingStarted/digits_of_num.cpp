#include<iostream>
using namespace std;
int main()
{
    int arr[15],num,r,i=0;
    cout<<"Enter Number : ";
    cin>>num;
    while(num>0)
    {
        r=num%10;
        arr[i]=r;
        num=num/10;
        i++;
    }
    i--;
    for(i;i>=0;i--)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}