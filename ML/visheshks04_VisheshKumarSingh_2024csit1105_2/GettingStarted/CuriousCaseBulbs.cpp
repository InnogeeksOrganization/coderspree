#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin>>n;
    
    for(int i=1;pow(i,2)<n;i++)
        cout<<(int)pow(i,2)<<endl;
    return 0;
}
