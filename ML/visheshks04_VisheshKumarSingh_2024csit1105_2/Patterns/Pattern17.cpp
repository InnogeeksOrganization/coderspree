#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    for(int i=1;i<=n/2+1;i++){
        
        if(i != n/2+1)
            for(int j=0;j<n/2;j++){
                cout<<"\t";
            }
            
        else
            for(int j=0;j<n/2;j++){
                cout<<"*\t";
            }
        
        for(int j=0;j<i;j++){
            cout<<"*\t";
        }
        
        cout<<endl;
    }
    
    for(int i=1;i<=n/2;i++){
        
        for(int j=0;j<n/2;j++){
            cout<<"\t";
        }
        
        for(int j=0;j<=n/2-i;j++){
            cout<<"*\t";
        }
        
        cout<<endl;
    }
    
}
