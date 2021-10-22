#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n;i++){
        for(int j=n-i; j>0; j--){
            cout<<'\t';
        }
        for(int k=i;k>0;k--){
            cout<<'*'<<'\t';
        }
        cout<<'\n';
    }
    
    return 0;
}
