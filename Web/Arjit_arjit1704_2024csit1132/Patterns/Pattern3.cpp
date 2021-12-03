#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    for(int i=n; i>0; i--){
        for(int j=0; j<=n; j++){
            if(j>=i)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}