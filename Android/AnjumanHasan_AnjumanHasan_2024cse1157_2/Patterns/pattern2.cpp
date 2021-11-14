#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    
   //write your code here
   for(i=0;i<n;i++)
   {
       for (j  = n; j >0; j--)
       {
           if(j<n-1)
           {
           cout << "";
           }
           else 
           {
            cout << "*\t";
            cout << "\n" ;
           }
       }
       cout << "\n" ;
   }
   return 0;
}
