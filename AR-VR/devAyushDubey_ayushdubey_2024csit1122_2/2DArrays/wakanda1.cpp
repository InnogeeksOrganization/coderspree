#include<iostream>


using namespace std;


int main() {
    int i,j,start,end,row,col;
    cin>>row>>col;
    int arr[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cin>>arr[i][j];
    }
    for(i=0;i<col;i++){
        if(i%2==0){
            start=0;
            end=row;
        }
        else{
            start=row-1;
            end=-1;
        }
        j=start;
        while(j!=end){
            cout<<arr[j][i]<<endl;
            if(start>end)
                j--;
            else
                j++;
        }
    }
    return 0;
}