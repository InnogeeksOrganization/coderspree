#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,k;
    cin >> n;
for(i=n;i>=1;i--){
    for(j=n;j>i;j--){
        cout<<"\t";
    }
    for(k=1;k<=i;k++){
        cout<<"*\t";
    }
    cout<<"\n";
}

}