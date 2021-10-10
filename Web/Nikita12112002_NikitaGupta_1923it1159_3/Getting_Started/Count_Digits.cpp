#include <iostream>
using namespace std;

int count_digits(int n)
{
    if(n<=9)
    return 1;
    
    return count_digits(n/10)+1;
    
}
int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
   int s= count_digits(n);
    cout<<s<<endl;
}