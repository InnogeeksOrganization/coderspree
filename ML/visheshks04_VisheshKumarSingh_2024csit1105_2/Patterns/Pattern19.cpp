#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;

    for(int i=0;i<=n/2;i++){
        
        if(i == 0 || i == n/2)
            for(int j = 0;j<=n/2;j++){
                cout<<"*\t";
            }
            
        else{
            for(int j = 0;j<n/2;j++){
                cout<<"\t";
            }
            
            cout<<"*\t";
        }
        
        if(i != n/2)
            for(int j = 1;j<n/2;j++){
                    cout<<"\t";
            }
            
        else{
            for(int j = 1;j<n/2;j++){
                    cout<<"*\t";
            }
        }
        cout<<"*";
        cout<<endl;
    }
    
    for(int i=0;i<n/2;i++){
        
        cout<<"*\t";
        for(int j=0;j<n/2-1;j++){
            cout<<"\t";
        }
        cout<<"*\t";
        if(i == n/2-1)
            for(int j=0;j<n/2;j++){
                cout<<"*\t";
            }
        
        cout<<endl;
    }
}
