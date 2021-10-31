#include <stdio.h>

int main()
{
    // k=5 to get the given output
    int i,j,k,l;
    scanf("%d",&k);
    for(i=0;i<=k-1;i++){
        if(i==0||i==k-1){
            for(l=0;l<k;l++){printf("*");}
            printf("\n");
        }
        else{
            
           for(j=i-k+2;j<=0;j++){
               
             printf(" ");
               
           }
        printf("*\n");
            
            
        }
    }

    return 0;
}
