#include <bits/stdc++.h>
using namespace std;

bool factors(int n) {
    if(n <= 1)
        return false;
        
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0)
            return true;
    }
    
    return false;   
}

int main() {
    int n;
    cin>>n;
    vector<int> vec(n), res;
    for(int i=0; i<n; i++)
        cin >> vec[i];
        
    for(int i=0; i<n; i++) {
        if(factors(vec[i]))
            res.push_back(vec[i]);
    }
    
    cout << "[";
    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i];
        if(res.size()-1 != i)
            cout<<", ";
    }
    cout<<']'; 
    return 0;
}