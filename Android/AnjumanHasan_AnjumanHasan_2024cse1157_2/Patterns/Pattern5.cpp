 #include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
   for ( i = 0; i < n; i++)
   {
        for ( j = 0; j < n; j++)
      {
         
         if(j==2)
         {
             cout << "*\t";
         }
           
      }
   }
   return 0;
}