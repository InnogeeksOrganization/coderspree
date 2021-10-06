#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    string s = to_string(n);
    for(int i=s.size()-1; i>=0; i--) {
        int a = s[i] - '0';
        cout << a << endl;
    }
    
    return 0;
}