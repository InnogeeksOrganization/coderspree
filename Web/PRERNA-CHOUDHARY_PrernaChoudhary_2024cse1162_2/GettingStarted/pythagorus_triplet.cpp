#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    int A,B,C;
    A=a*a;
    B=b*b;
    C=c*c;
    
    if((A+B==C)||(A+C==B)||(C+B==A))
    cout<<"true";
    else cout<<"false";
    
    //write your code here
    
}