#include <iostream>
using namespace std;
int main(){
    int low, high,i,j,c;
    cin >> low >> high;

   for(i=low;i<=high;i++)
   { c=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           {
               c++;
           }
       }
           if(c==2)
           {
               cout<<i;
               cout<<"\n";
           }
       }
   }