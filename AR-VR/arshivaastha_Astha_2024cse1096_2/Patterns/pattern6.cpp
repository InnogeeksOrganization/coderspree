#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    for(i=0;i<=n/2;i++){
        for(j=n/2;j>=i;j--)
            cout<<"*\t";
        for(j=1;j<2*(i+1);j++)
            cout<<"\t";
        for(j=n/2;j>=i;j--)
            cout<<"*\t";
        cout<<endl;
    }
    for(i=n/2;i>0;i--){
        for(j=n/2+1;j>=i;j--)
            cout<<"*\t";
        for(j=2*i;j>1;j--)
            cout<<"\t";
        for(j=n/2+1;j>=i;j--)
            cout<<"*\t";
        cout<<endl;
    }

    //write your code here
    
}