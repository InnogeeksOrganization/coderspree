#include <bits/stdc++.h>
using namespace std;

void printPermutations(string s, int begin) {
    if(begin == s.size()) {
        cout << s << endl;
        return;
    }
    
    for(int i=begin; i<s.size(); i++) {
        swap(s[i], s[begin]);
        printPermutations(s, begin+1);
        //swap(s[i], s[begin]);
    }
}

int main() {
    string s; cin >> s;
    
    printPermutations(s, 0);
    
    return 0;
}