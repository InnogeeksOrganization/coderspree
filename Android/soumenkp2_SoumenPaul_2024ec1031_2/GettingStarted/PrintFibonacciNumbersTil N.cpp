#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int first = 0;
    int second =1;
    
    cout<<first<<endl<<second<<endl;
    
    
    for(int i=2;i<n;i++)
    {
        int third = first + second;
        first = second;
        
        cout<<third<<endl;
        
        second = third;
        
        
        
    }
    //write your code here
    
}
