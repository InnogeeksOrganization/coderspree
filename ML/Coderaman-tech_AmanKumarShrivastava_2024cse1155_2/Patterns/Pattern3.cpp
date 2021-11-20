#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int i,j,count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++)
        cout<<"\t";
        for(j=(n-i+1);j<=n;j++)
        cout<<"*\t";
        cout<<endl;
    }
    //write your code here
    
}