#include<iostream>
using namespace std;

void rotate(long int* arr2, int n,int k){
    int i,j=n;
    long int *temp = new long int[n];
    if(k<0)
        k+=n;
    for(i=k-1;i>=0;i--)
        temp[i] = arr2[--j];
    j=0;
    for(i=k;i<n;i++)
        temp[i]=arr2[j++];
    for(i=0;i<n;i++)
        arr2[i] = temp[i];
   // write your code here
    
}

int main()
{
    int s,r,row,col,i,j;
    cin>>row>>col;
    long int **arr1 = new long int*[row];
    for(i=0;i<row;i++){
        arr1[i] = new long int[col];
        for(j=0;j<col;j++)
            cin>>arr1[i][j];
    }
    cin>>s;
    cin>>r;
    int nelements = 2*(row+col-2*(2*s-1));
    r = r%nelements;
    long int*arr2 = new long int[nelements];
    int ind=0;
    for(j=s-1;j<row-s;j++)
        arr2[ind++] = arr1[j][s-1];
    for(j=s-1;j<col-s;j++)
        arr2[ind++] = arr1[row-s][j];
    for(j=row-s;j>s-1;j--)
        arr2[ind++] = arr1[j][col-s];
    for(j=col-s;j>s-1;j--)
        arr2[ind++] = arr1[s-1][j];
        
    /*    
    for(i=0;i<nelements;i++)
        cout<<arr2[i]<<" ";
    */
    
    rotate(arr2,nelements,r);
    ind = 0;
    
    for(j=s-1;j<row-s;j++)
        arr1[j][s-1] = arr2[ind++];
    for(j=s-1;j<col-s;j++)
        arr1[row-s][j] = arr2[ind++];
    for(j=row-s;j>s-1;j--)
        arr1[j][col-s] = arr2[ind++];
    for(j=col-s;j>s-1;j--)
        arr1[s-1][j] = arr2[ind++];
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cout<<arr1[i][j]<<" ";
        cout<<endl;
    }
    
}