#include <iostream>
using namespace std;
int main() {
    char s1='*',s2=' ';
    int i,j;
    for(i=4;i>=0;i--)
    {
        if(i==4||i==0)
        {
            for(j=0;j<5;j++)
            {
                cout<<s1;
            }
            cout<<'\n';
        }
        else
        {
            for(j=0;j<i;j++)
            {
                cout<<s2;
            }
            cout<<s1<<'\n';
        }
    }
    return 0;
}