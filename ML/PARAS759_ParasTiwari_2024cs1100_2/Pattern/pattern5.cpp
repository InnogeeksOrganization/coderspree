#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,l,h;
    cin >> n;
    l=1;
    h=n/2;
    //write your code here
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        { 
        if(i-1<=n/2)
        { 
            if(j==(n/2)+2-i)
            {
                for(int k=0;k<2*i-1;k++)
                {cout<<"*\t";}
                break;
            }
            else{
                cout<<"\t";
            }
        }
        else
        {
        if(j>l)
        {
            for(int k=0;k<2*h-1;k++)
            {
                cout<<"*\t";
            }
            l++;
            h--;
            break;
        }
        else{
            cout<<"\t";
        }
        }
        } 
        cout<<endl;
    }

    
}