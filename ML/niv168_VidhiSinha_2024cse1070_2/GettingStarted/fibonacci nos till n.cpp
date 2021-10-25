#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n,arr[25],i;
    cin >> n;
    arr[0]=0;
    arr[1]=1;
    cout<<arr[0]<<endl<<arr[1]<<endl;
    for(i=2;i<n;i++)
    {
       arr[i]=arr[i-1]+arr[i-2] ;
       cout<<arr[i]<<endl;
    }

}
