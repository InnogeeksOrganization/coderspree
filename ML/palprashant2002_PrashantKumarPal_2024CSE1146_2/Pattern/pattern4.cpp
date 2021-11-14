#include<iostream>
using namespace std;
void spa(int k)
{
    int l;
    for(l=0;l<k;l++)
    {
        cout<<" ";
    }
}
void ast(int k)
{
    int l;
    for(l=0;l<k;l++)
    {
        cout<<"*";
    }
}
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        spa(i);
        ast(5-i);
        cout<<"\n";
    }
    return 0;
}