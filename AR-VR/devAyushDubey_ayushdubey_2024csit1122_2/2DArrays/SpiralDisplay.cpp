#include <iostream>
using namespace std;


int main()
{
    int row,col,i,j,count=0;
    cin>>row>>col;
    int **arr = new int*[row];
    int minrow = 0, mincol = 0, maxrow = row-1, maxcol = col-1;
    for(i=0;i<row;i
    ++){
        arr[i] = new int[col];
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    while(count < row*col){
        
        for(i=minrow; i<=maxrow && count< row*col; i++){
            cout<<arr[i][mincol]<<endl;
            count++;
        }
        mincol++;
        for(i=mincol; i<=maxcol && count < row*col; i++){
            cout<<arr[maxrow][i]<<endl;
            count++;
        }
        maxrow--;
        for(i=maxrow; i>=minrow && count< row*col; i--){
            cout<<arr[i][maxcol]<<endl;
            count++;
        }
        maxcol--;
        for(i=maxcol; i>=mincol && count< row*col; i--){
            cout<<arr[minrow][i]<<endl;
            count++;
        }
        minrow++;
        
    }
  
  // write your code here

  return 0;
}