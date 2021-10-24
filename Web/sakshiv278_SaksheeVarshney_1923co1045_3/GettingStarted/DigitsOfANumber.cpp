#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int dig=0;
    int temp=n;
    while(n!=0){
        n=n/10;
        dig++;
    }
    int div=(int)pow(10,dig-1);
    while(div!=0){
        int q=temp/div;
        cout<<q<<endl;
        temp=temp%div;
        div=div/10;
    }
    
}
