#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,d,i,j,arr[20];
    i=0;
    cin >> n;
    while(n>0)
    {
        d=n%10;
        arr[i]=d;
        n=n/10;
        i++;

    }
    for(j=i-1;j>=0;j--)
    {
        cout<<arr[j]<<endl;
    }
}






