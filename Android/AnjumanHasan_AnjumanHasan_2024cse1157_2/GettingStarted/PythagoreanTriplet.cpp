#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c; 
    
    //write your code here
   int x,y,z;
   x=pow(a,2);
   y=pow(b,2);
   z=pow(c,2);
    if((x==(y+z))||(y==(x+z))||(z==(x+y)))
    {
        cout << "true" ;
    }
    else
        cout << "false" ;
}