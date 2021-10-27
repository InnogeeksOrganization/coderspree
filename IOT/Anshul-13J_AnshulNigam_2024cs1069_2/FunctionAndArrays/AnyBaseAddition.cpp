#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    int carry=0,i=0,j=0,k;
    int d1[5]={},d2[5]={},sum[5],SUM=0;
    while(n1)
    {
        d1[i++]=n1%10;
        n1/=10;
    }
    while(n2)
    {
        d2[j++]=n2%10;
        n2/=10;
    }
    for(k=0; k<i || k<j; k++)
    {
        sum[k]=(d1[k]+d2[k]+carry)%b  ;
     //   cout<<d1[k]<<" "<<d2[k]<<" "<<carry<<" "<<sum[k]<<endl;
        carry= (d1[k]+d2[k]+carry)/b;
    }
    if(carry)
        sum[k++]=carry;
    
    for(i=k-1;i>=0;i--)
    {
        SUM=SUM*10+ sum[i];
    }
    return SUM;
    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}