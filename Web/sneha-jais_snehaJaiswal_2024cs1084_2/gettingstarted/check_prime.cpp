#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
//
   while(t-->0){
        int n, flag=0;
        cin>>n;

    
    if(n==1){
            cout<<"Not prime\n";
        }
        else{
        for(int j=2; j<n; j++){
            if(n%j==0){
                flag=1;
               
            }
        }
          if(flag==1){
            cout<<"not prime\n";
        }
        else
        cout<<"prime\n";
    }
    }
 
        
      
    return 0;
    
}