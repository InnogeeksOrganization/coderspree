#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

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

int main(){
    int n, b;
    
    cin>>n>>b;
    
    cout<<convert_base(n,b);
    return 0;
}
