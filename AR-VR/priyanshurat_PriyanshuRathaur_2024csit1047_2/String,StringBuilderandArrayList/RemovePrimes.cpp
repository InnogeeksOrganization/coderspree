/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int t,i,j;
cin>>t;
int arr[t];
int count=0;



cout<<"[";
for(i=0;i<t;i++)
{cin>>arr[i];
    for(j=2;j<(arr[i]);j++)
    {if(arr[i]%j==0)
        {count++;
        if(count>1)
        {cout<< ", "<<arr[i] ;}
            
           else{ 
            cout<< arr[i] ;}
        
        
            break;
        }
    }
}

cout<<"]";




    return 0;
}
