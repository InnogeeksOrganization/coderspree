#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
    //write your code here
    
}