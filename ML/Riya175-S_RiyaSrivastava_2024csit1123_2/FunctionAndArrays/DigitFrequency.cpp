#include <iostream>
using namespace std;
int main()
{
    int num, arr[30], x,i=0,j, count=0;
    cin>>num;
    cin>>x;
    while(num!=0)
    {
        arr[i] = num%10;
        i++;
        num = num/10;
    }
    for(j=0; j<=i; j++)
    {
        if(arr[j]==x)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}