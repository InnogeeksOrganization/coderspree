/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void minmax(int t, int arr[],int d)

{int i,min,max;
for(i=0;i<t;i++)
{if(arr[i]==d)
    {max=i;}
}

for(i=0;i<t;i++)
{if(arr[i]==d)
    {min=i;
        break;
    } 
}
cout<<min<<endl<<max;
    
}



int main()
{
   int t,i,d,min,max;
   cin>>t;
   int arr[t];
   
   for(i=0;i<t;i++)
   {cin>>arr[i];}
   
   cin>>d;
   minmax(t,arr, d);
  
   

    return 0;
}
