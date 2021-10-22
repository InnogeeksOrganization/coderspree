#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    
    int inverse[v.size()];
    
    for(int i=0;i<v.size();i++){
        inverse[v[i]-1] = i+1;
    }
    
    n = 0;
    
    for(int i=v.size()-1;i>=0;i--){
        n = n*10 + inverse[i];
    }
    
    cout<<n;
}
