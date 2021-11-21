#include<iostream>
using namespace std;
int main() {
    int i,j,row,col;
    cin>>row>>col;
    int arr[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cin>>arr[i][j];
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
//     Write your code here.

}