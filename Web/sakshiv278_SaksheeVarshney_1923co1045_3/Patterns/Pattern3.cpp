#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    cin >> n;
    int sp=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        if(j<=sp){
            cout<<"	";
        }
        else{
            cout<<"*	";
        }
        }
        cout<<endl;
        sp--;
    }
    
}