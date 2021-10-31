#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j+1>=n)
            cout<<"*\t";
            else cout<<"\t";
            
        }
        cout<<"\n";
    }
    
    
    
}