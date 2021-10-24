#include <bits/stdc++.h>
using namespace std;

void toggle(string s) {
    for(int i=0; i<s.size(); i++) {
        if(islower(s[i])) {
            char ch =  toupper(s[i]);
            cout << ch;
        }
        else if(isupper(s[i])) {
            char ch = tolower(s[i]);
            cout << ch;
        }
    }
}
int main() {
    string s; cin >> s;
    
    toggle(s);
    
    
    return 0;
}