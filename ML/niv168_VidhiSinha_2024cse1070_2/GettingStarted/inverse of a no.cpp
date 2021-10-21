
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n,arr[20],i,d;
    cin >> n;
    i=0;
    while(n>0)
    {
        d=n%10;
        arr[d]=i+1;
        i++;
        n=n/10;
    }
    while(i>0)
    {
        cout<<arr[i];
        i--;
    }}

