 #include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int spaces=n-1,stars=1;
   for ( i = 0; i < n/2; i++)
   {
      for(j=1;j<spaces;j++)
      {
         cout << " " ;
        
      }
        for ( j = 1; j <= stars; j++)
      {

           cout << "*\t";
           
      }
      
      spaces=spaces-1;
      stars+=2;
      cout << endl;

   }
   for ( i = (n/2); i <= n; i++)
   {
       for ( j = 1; j <= stars; j++)
      {

           cout << "*\t";
           
      }
      for(j=1;j<spaces;j++)
      {
         cout << " " ;
        
      }
       
      
      spaces=spaces+1;
      stars-=2;
      
      cout << endl;

   }
   
   return 0;
}
