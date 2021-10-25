#include<iostream>
using namespace std;
#include<vector>

int main(){
    long int number;
    cin>>number;
    vector<int> g1;

    long int number2=0;
    while(number!=0){
        int remainder=number%10;
        number=number/10;
        // number2=number2*10+remainder;
        g1.push_back(remainder);
    }
    
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
}