#include <stdio.h>

int main()
{
    int i,j,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        
        scanf("%d",&n);
        if(n==0||n==1){
            printf("not prime\n");
        }
        else if(n==2){
            printf("prime\n");
        }
            
        
        else{
            for(j=2;j<n;j++){
                if(n%j==0){
                    printf("not prime\n");
                    break;
                }
                else{printf("prime\n");
                    break;
                }
        }
    }
    }
    

    return 0;
}

