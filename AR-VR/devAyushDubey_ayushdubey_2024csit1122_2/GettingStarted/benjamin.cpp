#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n,i,j;
    cin>>n;
    i = sqrt(n);
    for(j=1;j<=i;j++){
        cout<<j*j<<endl;
    }
    /*bool bulbs[n+1];
    for(i=0;i<n;i++){
        bulbs[i]=false;
    }
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j=j+i){
            //cout<<j<<" ";
            bulbs[j] = ~bulbs[j] + 2;
            //cout<<bulbs[j]<<" "<<j<<" ";
        }
    }
    //cout<<endl;
    for(i=1;i<=n;i++){
        if(bulbs[i]==true)
            cout<<i<<endl;
    }
    */
}