
#include<bits/stdc++.h>


using namespace std;


int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;
  int arr[n][m];
  
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>arr[i][j];
      }
  }
  

int row_start=0,col_start=0,row_end=n-1, col_end=m-1;

while(col_start<=col_end){
    
    //start from first column
    for(int row=row_start;row<=row_end;row++){
        cout<<arr[row][col_start]<<"\n";
        
    }
    col_start++;
    
    //now moving towards next column
    if(col_start>col_end)
    break;
    
    for(int row=row_end;row>=row_start;row--){
        cout<<arr[row][col_start]<<"\n";
        
    }
    col_start++;

    
}


    return 0;
}