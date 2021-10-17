#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("*");
    }
    printf("\n");
    
    for(i=0;i<3;i++)
    {
        int a=3-i;
        while(a!=0)
        {
            printf(" ");
            a--;
        }
        printf("*");
        printf("\n");
    }
    
     for(i=0;i<5;i++)
    {
        printf("*");
    }
  

    return 0;
}
