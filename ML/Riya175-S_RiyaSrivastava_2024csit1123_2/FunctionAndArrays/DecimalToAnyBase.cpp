#include<iostream>
using namespace std;
int main()
{
    int num, b, arr1[30],i=0,j;
    cin>>num;
    cin>>b;
    while(num!=0)
    {
        arr1[i] = num %b;
        i++;
        num = num/b;
    }
    for(j=i-1; j>=0; j--)
    {
        cout<<arr1[j];
    }
    i=0;
    return 0;
}