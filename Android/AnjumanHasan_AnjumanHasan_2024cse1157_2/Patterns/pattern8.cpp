 #include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int spaces=n-1;
    
   for ( i = 0; i < n-1; i++)
   {
      for(j=1;j<=spaces;j++)
      {
            cout << "\t" ;
      }
      cout << "*\t" ;
     spaces--;
     cout << endl; 
   } 
   cout << "*\t" << endl;
   return 0;
} 
