#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    
   //write your code here
   char A[n][n];
   for (int i = 0; i <=n; i++)
   {
        for (int j = 0; j <= n; j++)
      {
         if(i+j<n-1)
         {
             A[i][j]=' ' ;
         }
         else
         A[i][j]='*';
      }
      
   }
    for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
      {
          cout <<  A[i][j] << "\t" ;
      }
      cout << endl;
   }
   return 0;
}
