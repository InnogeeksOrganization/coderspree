#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,k,m;
    cin >> n;
    k=n/2;
    for(i=1;i<=n/2;i++)
    {
        
        m=(2*i)-1;
        for(j=1;j<=k;j++)
            cout<<"\t";
        for(j=1;j<=m;j++)
            cout<<"*\t";
        cout<<endl;
        k--;
    }
    for(i=0;i<n;i++)
    {
        cout<<"*\t";
    }
    cout<<endl;
    k=1;
    for(i=1;i<=n/2;i++)
    {
        
        
        for(j=1;j<=k;j++)
            cout<<"\t";
        for(j=1;j<=m;j++)
            cout<<"*\t";
        cout<<endl;
        k++;
        m-=2;
    }
    

}