#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int ToDecimal(int n, int b){
    int result=0;
    int p = 0;
    while(n>0){
        int dig = n%10;
        n/=10;
        result += dig*pow(b,p);
        p++;
    }
    
    return result;
}

int convert_base(int n, int b){
    
    vector<int> results;
    
    while(n>0){
        results.push_back(n%b);
        n/=b;
    }
    
    reverse(results.begin(), results.end());
    
    int converted = 0;
    for(int i=0;i<results.size();i++){
        converted = converted*10 + results[i];
    }
    
    return converted;
}

int BaseConvert(int num, int base1, int base2){
    return convert_base(ToDecimal(num, base1), base2);
}

int main(){
    
    int num, base1, base2;
    
    cin>>num>>base1>>base2;
    cout<<BaseConvert(num, base1, base2);
    
    return 0;
}
