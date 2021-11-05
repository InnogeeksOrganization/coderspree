#include <iostream>
#include "bits/stdc++.h"
#include <cstdlib>
#include<cmath>

using namespace std;
int main(){
    int n,k,len, run;
    cin>>n>>k;
    string p, s = to_string(n);
    len = s.length();
    if(k>0)
    {   
        run = abs(k)%len;
    } 
    else
    {
        run = len-(abs(k)%len);
    }
    while(run--)
    {
        p = s[len-1];
        s.erase(len-1, 1);
        s.insert(0, p);
    }
    cout<<s;

}