#include <iostream>
using namespace std;

int fact(int n){
    int sum=n;
    if(n==0)
        return 1;
    else{
        for(int i=n-1;i>1;i--)
            sum = sum*i;
    }
    //cout<<sum;
    return sum;
}

int comb(int n, int k){
    int i;
    int num = fact(n);
    int den = fact(k) * fact((n-k));
    i = num / den;
    //cout<<i;
    return i;
}

int main(){
    int n,i,j;
    cin >> n;
    //cout<<comb(n,0);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
            cout<<comb(i,j)<<"	";
        cout<<endl;
    }
    //write your code here
    
}