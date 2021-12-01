 #include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int s1=0,s2=n;
   for ( i = 0; i < n; i++)
   {
        for ( j = 0; j < s1; j++)
      {
          cout << "\t" ;
           
      }
        for ( j = 0; j < s2; j++)
        {
      cout << "*\t" ;
      
        }
        s1++;
         s2--;
      cout << endl;
   }
   return 0;
}
