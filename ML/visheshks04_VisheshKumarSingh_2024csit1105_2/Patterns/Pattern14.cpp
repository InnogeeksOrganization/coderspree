#include<iostream>
using namespace std;
int main(int agrc, char** argv){
    int n;
    cin >> n;
    
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
}
