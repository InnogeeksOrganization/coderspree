#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n,d,count=0;
    cin>>n;
    cin>>d;
    while(n!=0){
    if(n%10==d){
        count++;
          n=n/10;  
    }
    else
    {
    n=n/10;
    }
    
}
    cout<<count;
    
    
}
