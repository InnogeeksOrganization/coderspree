#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<7;i++)
    {
        for(j=1;j<7;j++)
        {
            
            if(i+j==6)
            cout<<" * ";
            else
            cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}