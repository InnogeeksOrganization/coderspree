#include <iostream>
using namespace std;


int main()
{
    int i=0,j=0,dir,row,curr,col;
    cin>>row>>col;
    int **arr = new int*[row];
    for(i=0;i<row;i++){
        arr[i]=new int[col];
        for(j=0;j<col;j++)
            cin>>arr[i][j];
    }
    dir = 0,i=0,j=0;
    while(i<row && j<col){
        if(dir%4==0){
            if(j+1==col)
                break;
            dir += arr[i][++j];
        }
        else if(dir%4==1){
            if(i+1==row)
                break;
            dir += arr[++i][j];
        }
        else if(dir%4==2){
            if(j==0)
                break;
            dir += arr[i][--j];
        }
        else if(dir%4==3){
            if(i==0)
                break;
            dir += arr[--i][j];
        }
    }
    cout<<i<<endl<<j;
    /*
    if(i==row)
        cout<<i-1<<endl<<j;
    else
        cout<<i<<endl<<j-1;
        */
  return 0;
}