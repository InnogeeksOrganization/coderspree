#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
long int rem,num=n,rev=0;
    
   while(num>0)
    {
        rem=num%10;
        cout<<rem<<"\n";
        rev=rev*10+rem;
        
        num=num/10;
        
    }
    
}