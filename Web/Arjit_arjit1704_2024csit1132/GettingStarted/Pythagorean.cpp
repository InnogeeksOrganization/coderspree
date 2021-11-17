#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    //write your code here
    if(a*a==b*b+c*c){
        cout<<"true";
    }
    else if(b*b==a*a+c*c){
        cout<<"true";
    }
    else if(c*c==a*a+b*b){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}