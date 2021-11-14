#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c,max;
    cin >> a >> b >> c;
    if(a>b && a>c){
        max= a;
    }
    else if(b>a && b>c){
        max=b;
    }
    else{
        max=c;
    }
    if(max==a && (a*a)==(b*b)+(c*c) || max==b && (b*b)==(a*a)+(c*c) || max==c && (c*c)==(a*a)+(b*b)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
}