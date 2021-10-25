#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter the no. of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i||j>=n+i)
            printf("   ");
            else
            printf(" * ");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=i||j>=2*n-i)
            printf("   ");
            else
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}