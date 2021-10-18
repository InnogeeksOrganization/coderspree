#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=0;i<=n/2;i++){
        for(int j=0;j<n/2-i;j++)
            cout<<"\t";
        cout<<"*";
        for(int j=0;j<2*i-1;j++)
            cout<<"\t";
            
        cout<<"\t";
        if(i != 0)
            cout<<"*";
            
        cout<<endl;
    }

    for(int i=0;i<n/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"\t";
        }
        cout<<"*";
        
        for(int j = 2*(n/2)-3-2*i;j>=0;j--){
            cout<<"\t";
        }
        
        if(i != n/2-1)
            cout<<"*";
        cout<<endl;
    }
    
}
