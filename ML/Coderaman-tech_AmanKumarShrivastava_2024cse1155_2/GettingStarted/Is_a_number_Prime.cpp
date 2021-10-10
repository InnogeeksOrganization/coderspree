#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"not prime"<<"\n";
                count=1;
                break;
            }
        }
        if(count==0)
        cout<<"prime"<<"\n";
    }
    return 0;
}