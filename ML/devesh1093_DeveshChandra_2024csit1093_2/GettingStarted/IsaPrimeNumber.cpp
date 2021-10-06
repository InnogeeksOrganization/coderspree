#include <iostream>
using namespace std;
int main(){
    int flag=0;
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin>>n;
        for(int i=2; i<n; i++){
            if(n%i==0){
              flag=1;
              break;
            }
            else{
                flag=0;
            }
            
        }
        if (flag==0){
            cout<<"prime\n";
            
        }
        else{
            cout<<"not prime\n";
        }
        t--;
    }
       
    return 0;
}
