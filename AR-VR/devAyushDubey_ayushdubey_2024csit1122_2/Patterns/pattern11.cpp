#include <iostream>
using namespace std;

int main(){
    int n,i,j,num=1;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++)
            cout<<num++<<"\t";
        cout<<endl;
    }
    //write your code here
    
}