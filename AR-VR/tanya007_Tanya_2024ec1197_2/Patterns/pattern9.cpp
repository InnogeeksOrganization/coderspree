#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j || i == n-j-1)
                cout<<"*";
            cout<<"\t";
        }    
        cout<<endl;
    }
    
}