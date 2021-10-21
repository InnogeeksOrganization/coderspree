#include <bits/stdc++.h>
using namespace std;

string printDifference(string s) {
    string newString;
    
    for(int i=0; i<s.size()-1; i++) {
        int a = s[i+1] - s[i];
        newString += s[i] + to_string(a);
    }
    newString += s[s.size()-1];
    
    return newString;
}

int main() {
    string s; cin >> s;
    
    string ans = printDifference(s);
    cout << ans << endl;
    
    return 0;
}