#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int a[10],i=0,j=0;
    while(n>0)
    {
        a[i++] = n%10;
        n /= 10;
    }
    for(j = i-1; j>=0; j--)
        cout<<a[j]<<endl;
    return 0;
}