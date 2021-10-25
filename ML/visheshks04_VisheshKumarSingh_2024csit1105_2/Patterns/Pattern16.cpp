#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        
        for(int j = 2*(n-i-1);j>=0;j--){
            cout<<"\t";
        }
        
        if(i!=n)
            for(int j=i;j>=1;j--){
                cout<<j<<"\t";
            }
            
        else{
            for(int j=n-1;j>=1;j--){
                cout<<j<<"\t";
            }
        }
        
        cout<<endl;
    }
    
}
