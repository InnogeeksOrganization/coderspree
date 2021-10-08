#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    if(start >= end)
        return true;
        
    if(s[start] != s[end])
        return false;
    
    return isPalindrome(s, start+1, end-1);
}

void printPalindromes(string s) {
    if(s.size() == 0)
        return;
   
    for(int j=0; j<s.size(); j++) {
        string temp = s.substr(0, j+1);
        if(isPalindrome(temp, 0, temp.size()-1))
            cout << temp << endl;
    }
    
    string ss = s.substr(1);
    printPalindromes(ss);
}


int main() {
    string s;
    cin >> s;
    
    printPalindromes(s);
    
    return 0;
}