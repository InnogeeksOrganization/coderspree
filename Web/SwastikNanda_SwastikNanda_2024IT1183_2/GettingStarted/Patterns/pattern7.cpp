#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=n;i>=1;i--){
        for(int j=n-i;j>0;j--){
            printf("\t");
        }
        printf("*\n");
        
    }
    return 0;
}