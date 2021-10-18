#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++)
        cin>>arr[i];
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] > max)
            max=arr[i];
        if(arr[i] < min)
            min=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(max==arr[i] || min==arr[i])
        {
            swap(&arr[i],&arr[n-1]);
            n--;
            i--;
        }
    }
    max=arr[0],min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] > max)
            max=arr[i];
        if(arr[i] < min)
            min=arr[i];
    }
    cout<<max<<" "<<min;
    return 0;
}