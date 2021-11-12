#include <iostream>  

using namespace std;  



bool isTriplet(int i,int j, int k)  

{  



   int x = i * i, y = j * j, z = k * k;  

   if (x == y + z || y == x + z || z == x + y)  

    cout<< "true";  
   else
   cout<<" false"; 

}  
 



int main()  

{  
int a, b,c;
cin>>a>>b>>c; 

isTriplet(a,b,c);

return 0;  

}  