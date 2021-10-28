#include <iostream>
using namespace std;
int fibo(int k){
    if(k==1){
        return 0;
    }
    else if (k==2){
        return 1;
    }
    else{
        return fibo(k-1)+fibo(k-2);
    }
}

int main(){
    int n;
    cin >> n;
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
           cout<<fibo(k)<<"\t";
           k++;
        }
        cout<<"\n";
    }
    
    return 0;
}
