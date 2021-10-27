#include <iostream>
#include<cmath>

using namespace std;
{
    int n,k,div=1,mul=1,temp,q,r,rod;
    cin>>n>>k;
    int nod=0;
    temp=n;
    while(temp!=0){
        nod++;
        temp=temp/10;
    }
    k=k%nod;
    if(k<0){
        k=k+nod;
    }
    for(int i=1;i<=nod;i++){
        if(i<=k){
         div=div*10;
        }
        else{
         mul=mul*10;
        }
    }
    q=n/div;
    r=n%div;
    rod=r*mul+q;
    cout<<rod;
}