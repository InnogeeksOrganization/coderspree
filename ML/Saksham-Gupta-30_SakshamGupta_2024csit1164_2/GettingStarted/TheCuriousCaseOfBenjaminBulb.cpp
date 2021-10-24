#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int n, i;
    cin>>n;
    for (i = 1; i * i <= n; i++)
        cout << i*i << endl;
}