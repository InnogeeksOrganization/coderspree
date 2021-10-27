#include<iostream>
#include<cmath>

using namespace std;

float f(int x){
    float ret;
    ret = cosf(2*x) / (cosf(x) - sinf(x));
    return ret;
}

int main()
{
int n,q,i,j,qtype,l,r,d,k,count=0;
float p;
cin>>n>>q;
int arr[n],ress[q];
for(i=0;i<n;i++)
    arr[i] = i;
for(i=0;i<q;i++){
    p = 0.0f;
    cin>>qtype;
    if(qtype==0){
        cin>>l>>r;
        for(j=l;j<=r;j++)
            p = p + f(arr[j]);
        k = floor(p);
        ress[count++]=k;
    }
    else if(qtype==1){
        cin>>l>>r>>d;
        for(j=l;j<=r;j++)
            arr[j] = arr[j] + d;
    }
}
for(i=0;i<count;i++)
    cout<<ress[i]<<endl;

return 0;
}