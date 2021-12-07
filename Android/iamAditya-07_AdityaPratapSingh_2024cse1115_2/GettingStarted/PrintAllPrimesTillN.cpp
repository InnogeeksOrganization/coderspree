#include<iostream>
using namespace std;
int main() {
    
    int low;
    cin>>low;
    
    int high;
    cin>>high;
    
    for(int n=low;n<=high;n++){
        int div=2;
        while(div*div<=n){
            if(n%div==0){
                break;
            }
            div++;
        }
        if(div*div>n){
            cout<<n;
            cout<<"\n";
        }
    }

}