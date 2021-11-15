#include <iostream>
using namespace std;

int main()
{
    int i,j,n,space,star;
   scanf("%d",&n);
   space=1;
   star=((n/2)+1);
   for(i=1;i<=n;i++)
   {
        for(j=1;j<=star;j++)
        {
            printf("*\t");
        }
        for(j=1;j<=space;j++)
        {
            printf("\t");
        }
        for(j=1;j<=star;j++)
        {
            printf("*\t");
        }
        if(i<=n/2)
        {
            star--;
            space=space+2;
        }
        else
        {
            star++;
            space=space-2;
        }
        printf("\n");
   }
}