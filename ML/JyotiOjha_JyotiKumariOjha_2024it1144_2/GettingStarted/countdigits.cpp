#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    int count=0;
    cin >> n;
    while(n!=0)
    {
        int x= n%10;
        count++;
        n= n/10;
    }
    cout<<count<<endl;
    //write your code here
    
    
    
}