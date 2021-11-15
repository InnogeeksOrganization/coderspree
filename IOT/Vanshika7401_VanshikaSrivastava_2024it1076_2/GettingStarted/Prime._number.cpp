#include <iostream>
using namespace std;

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
  
    
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main(){
    int t;
    cin >> t;
   while(t--)
   {
       int n;
       cin>>n;
       isPrime(n)? cout << " is prime\n" : cout << " not prime\n";
   }
    //write your code here
    return 0;
}

  

  
