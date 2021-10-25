#include <iostream>
using namespace std;

int main()
{
    int i,j,a,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i-1;
        while(a!=0)
        {
            printf("\t");
            a--;
        }
        printf("*\t");
        printf("\n");
    }
    
}