#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i= n; i>0; i=i-2){
        for(int j=(i-1)/2; j>0; j--){
            cout<<"\t";
        }
        for(int k=1; k<=n-(i-1); k++){
            cout<<"*\t";
        }
        for(int j=(i-1)/2; j>=0; j--){
            cout<<"\t";
        }
        cout<<endl;
    }
    for(int i=3; i<=n; i=i+2){
        for(int j=1; j<=(i-1)/2; j++){
            cout<<"\t";
        }
        for(int k=n-(i-1); k>0; k--){
            cout<<"*\t";
        }
        for(int j=1; j<(i-1)/2; j++){
            cout<<"\t";
        }
        cout<<endl;
        
        
    }

return 0;
}
