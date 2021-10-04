#include <iostream>
using namespace std;

int gcd(int, int);
int lcm(int, int);

int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    cout<<gcd(num1, num2)<<endl;
    cout<<lcm(num1, num2)<<endl;
    
    return 0;
}

int gcd(int a, int b){
    int min = a>b?b:a;
    
    for(int i=min;i>1;i--){
        if(a%i == 0 && b%i == 0)
            return i;
    }
    
    return 1;
}

int lcm(int a, int b){
    int max = a>b?a:b;
    int min = a>b?b:a;
    
    for(int i=1;i<=a*b;i++){
        if((max*i)%min == 0)
            return max*i;
    }
    
    return a*b;
}
