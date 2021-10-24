#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<"\t";
        }
        for(int j=1; j<=2*(n-i)-1; j++){
            
        cout<<"\t";
        }
        
        for(int j=i; j>=1; j--){
            if(j==n){
            j=i-1;
        }
            cout<<j<<"\t";
            
        }
        cout<<endl;
    }
return 0;
}
