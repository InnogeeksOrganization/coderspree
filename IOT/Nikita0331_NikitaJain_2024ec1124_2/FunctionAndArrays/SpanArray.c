#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[50],i,n,min,max;
    printf("enter the no. of element in array : ");
    scanf("%d",&n);
    printf("given array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        else if(arr[i]<min)
        min=arr[i];
    }
    printf("MAX = %d & MIN = %d",max,min);
    printf("\nSpan of array : %d",max-min);
    return 0;
    
}