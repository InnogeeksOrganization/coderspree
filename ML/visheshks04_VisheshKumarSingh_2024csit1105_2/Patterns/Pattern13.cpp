#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0 || n==1)
        return 1;
        
    return n*factorial(n-1);
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d\t", nCr(i,j));
        }
        
        printf("\n");
    }
    
}

