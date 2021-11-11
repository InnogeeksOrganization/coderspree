#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j;
    cin >> n;
    int star=1;
   int  space=n/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<space;j++)
        {
            cout<<"\t";
            
        }
        for(j=0;j<star;j++)
        {
            cout<<"*\t";
            
        } 
        if(i<n/2)
        {
            space--;
            star+=2;
        }
        else
        {
            space++;
            star-=2;
        }
        cout<<"\n";
    }
    
    
    
}