
#include <stdio.h>

int main() {
    int i,d ,n ;
    //printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
       // printf("%d\n",d);
        n=n/10;
        printf("%d\n",d);
    }
  
}