#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a>b && a>c){
        if(pow(a,2) == pow(b,2)+pow(c,2))
            cout<<"true";
        else
            cout<<"false";
    }
    
    if(b>a && b>c){
        if(pow(b,2) == pow(a,2)+pow(c,2))
            cout<<"true";
        else
            cout<<"false";
    }
    
    if(c>a && c>b){
        if(pow(c,2) == pow(a,2) + pow(b,2))
            cout<<"true";
        else
            cout<<"false";
    }
    return 0;
}  
