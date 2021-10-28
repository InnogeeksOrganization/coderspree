#include<iostream>
#include <cstdio>
using namespace std;
 

void convert10tob(int N, int b)
{
     if (N == 0)
        return;
     int x = N % b;
     N /= b;
     if (x < 0)
        N += 1; 
     convert10tob(N, b);
     
     if(x<0)
     {
        cout<<x + (b * -1);
     }
     else
     {
         cout<<x;
     }
     return;
}
 

int main()
{
    int N,b;
   
    cin>>N;
   
    cin>>b;
    if (N != 0)
    {
        convert10tob(N, b);
        cout<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}