/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a;
   cin>>a;
   
   if (a>90)
   {cout<<"excellent";}
  else if (a<=90 && a>80)
   {cout<<"good";}
   else if (a<=80 && a>70)
   {cout<<"fair";}
   
   else if (a<=70 && a>60)
   {cout<<"meets expectations";}
   
    else
   {cout<<"below par";}

    return 0;
}
