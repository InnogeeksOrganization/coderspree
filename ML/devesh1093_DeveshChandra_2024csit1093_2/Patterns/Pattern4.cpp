#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for(int i=n; i>0; i--){
        for (int j=0; j<n-i;j++){
            cout<<'\t';
            }
        for(int k=i; k>0; k--){
            cout<<"*"<<'\t';
        }
  cout<<'\n';
    }
    
return 0; }
