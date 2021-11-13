#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    
   //write your code here
   for(i=0;i<n;i++)
   {
       for (j  = 0; j <= i; j++)
       {
           cout << "*\t";
       }
       cout << "\n" ;
   }
   return 0;
}
