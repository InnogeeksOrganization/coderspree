#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n/2+1;i++){
        for(int j = 0;j<n/2+1-i;j++)
            cout<<"*\t";
        
        for(int j=0;j<=2*i;j++)
            cout<<"\t";
            
        for(int j = 0;j<n/2+1-i;j++)
            cout<<"*\t";
        cout<<endl;
    }
    
    
    for(int i=n/2-1;i>=0;i--){
        for(int j = 0;j<n/2+1-i;j++)
            cout<<"*\t";
        
        for(int j=0;j<=2*i;j++)
            cout<<"\t";
            
        for(int j = 0;j<n/2+1-i;j++)
            cout<<"*\t";
        cout<<endl;
    }
    
    
    
}