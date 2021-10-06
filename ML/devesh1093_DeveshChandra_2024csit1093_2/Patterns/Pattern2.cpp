#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=1 && n<=100){
    for(int i=0;i<n;i++){
       for(int j=1;j<=n-i;j++)
        {
            cout<<"*"<<"\t";
        }
    cout<<'\n';
   } }
    return 0;
}
