#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(int i=1;i<=5;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           cout<<"  ";  
       }  
       for(j=i; j<=5; j++)
        {
            cout<<"* ";
        }
     cout<<"\n";  
    }  
    return 0;
}