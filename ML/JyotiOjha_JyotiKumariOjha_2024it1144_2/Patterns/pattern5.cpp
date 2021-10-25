#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=0;i<=n/2;i++){
        
        for(int j=0;j<n/2-i;j++)
            cout<<"\t";
            
        for(int j=1;j<=i+1;j++)
            cout<<"*\t";
            
        for(int j=1;j<i+1;j++)
            cout<<"*\t";
        
        cout<<endl;
    }
    
    for(int i = 0;i<n/2;i++){
        
        for(int j=0;j<=i;j++)
            cout<<"\t";
        
        for(int j=0;j<n/2-i;j++)
            cout<<"*\t";
            
        for(int j=0;j<n/2-i-1;j++)
            cout<<"*\t";
        
        cout<<endl;
    }

    
}