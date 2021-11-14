#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,k;
    cin >> n;
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<"*\t";
            
        }
        cout<<endl;
        k--;
    }
    
    
}