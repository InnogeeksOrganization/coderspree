#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2){
    int borrow=0,diff=0,d1[3]={},d2[3]={},i=0,j=0,l=0,d[3],k;
    while(n2)
    {
        d2[i++]=n2%10;
        n2/=10;
    }
    while(n1)
    {
        d1[j++]= n1%10;
        n1/=10;
    }

    for(k=0 ; k<3 ;k++)
    {
        if(d2[k]<d1[k])
        {
            d2[k]+=b;
            d2[k+1]-=1;
        }
        d[l++]=d2[k]-d1[k];
    }
    for(i=2;i>=0;i--)
    {
        diff= diff*10 + d[i];
    }
    cout<<diff;
    return 0;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    getDifference(b,n1,n2);
}