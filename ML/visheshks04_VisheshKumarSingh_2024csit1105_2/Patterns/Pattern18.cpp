#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    for(int i=0;i<=n/2;i++){
        for(int j=0;j<i;j++){
            cout<<"\t";
        }
        
        
        if(i == 0)
            for(int j=0; j<n; j++){
                cout<<"*\t";
            }
        
        else if(i == n/2)
            cout<<"*";
        
        else{
            cout<<"*";
            for(int j=2*(n/2-i)-1;j>=0;j--){
                cout<<"\t";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    for(int i=0;i<n/2;i++){
        for(int j=n/2-i-1;j>0;j--){
            cout<<"\t";
        }
        
        for(int j=0;j<2*(i+2)-1;j++){
            cout<<"*\t";
        }
        
        cout<<endl;
    }
    
}
