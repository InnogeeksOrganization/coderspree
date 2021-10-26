#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        cout<<"* ";
        cout<<"\n";
    }
    return 0;
}