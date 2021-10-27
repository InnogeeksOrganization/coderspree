#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    if(((a*a +b*b)==c*c)||((a*a + c*c)==b*b)||((b*b +c*c)==a*a)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
