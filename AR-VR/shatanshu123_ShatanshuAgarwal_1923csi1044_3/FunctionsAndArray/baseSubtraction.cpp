#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2){
    // write your code here
    
    int ans = 0;
    int power = 1;
    int borrow = 0;
    
    while(n2 != 0){
        int ld2 = n2 % 10;
        int ld1 = n1 % 10;
        n2 /= 10;
        n1 /= 10;
        
        int diff = (ld2 - borrow) - ld1;
        if(diff >= 0){
            borrow = 0;
        }else{
            diff += b;
            borrow = 1;
        }
        ans += diff * power;
        power *= 10;
    }
    return ans;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getDifference(b,n1,n2)<<endl;
}
                        
                                