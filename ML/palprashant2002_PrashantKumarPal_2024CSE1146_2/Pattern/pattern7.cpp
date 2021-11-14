#include<iostream>
using namespace std;
void spa(int k)
{
    int l;
    for(l=0;l<k;l++)
    {
        cout<<"  ";
    }
}
int main()
{
    int i,j,n;
    cout<<"Enter value of N :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        spa(i);
        
        cout<<"*\n";
    }
    return 0;
}