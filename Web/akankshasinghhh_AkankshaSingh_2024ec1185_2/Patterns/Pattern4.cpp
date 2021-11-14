#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    for(int i=n;i>0;i--)
    {
        for(int k=0;k<n-i;k++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
    
}