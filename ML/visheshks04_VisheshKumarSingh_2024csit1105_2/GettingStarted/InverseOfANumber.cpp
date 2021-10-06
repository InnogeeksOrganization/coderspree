#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    vector<int> num;
    while(n>0){
        num.push_back(n%10);
        n/=10;
    }
    
    int inverse[num.size()];
    
    for(int i=0;i<num.size();i++){
        inverse[num[i]-1] = i+1;
    }
    
    n = 0;
    
    for(int i=num.size()-1;i>=0;i--){
        n = n*10 + inverse[i];
    }
    
    cout<<n;
}
