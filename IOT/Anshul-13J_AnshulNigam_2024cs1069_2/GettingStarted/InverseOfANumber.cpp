#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n,digit=0,n1,k=0,inverse=0;
    cin >> n;
    n1=n;
    while(n1)
    {
        n1/=10;
        digit++;
    }
    int num[digit+1],inv[digit+1];
    n1=n;
    while(n1)
    {
        inv[n1%10]= (++k);
        n1=n1/10;
    }
    for(int i=k;i>=1;i--)
    {
        inverse= inverse*10 + inv[i];
    }
    printf("%d",inverse);
    return 0;
}