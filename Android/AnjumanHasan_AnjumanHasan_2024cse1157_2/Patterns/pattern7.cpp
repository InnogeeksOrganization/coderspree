 #include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int spaces=1;
    cout << "*\t" << endl;
   for ( i = 0; i < n-1; i++)
   {
      for(j=1;j<=spaces;j++)
      {
            cout << "\t" ;
      }
      cout << "*\t" ;
     spaces++;
     cout << endl; 
   } 
   return 0;
} 
