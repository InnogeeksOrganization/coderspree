#include <iostream>
#include<vector>
using namespace std;

int main(int argc, char **argv){
    int n, d;
    cin >> n;
    vector<int> digs;
    while(n>0){
        d = n%10;
        digs.push_back(d);
        n /= 10;
    }
    
    for(int i=digs.size()-1;i>=0;i--){
        cout<<digs[i]<<endl;
    }
    
}

