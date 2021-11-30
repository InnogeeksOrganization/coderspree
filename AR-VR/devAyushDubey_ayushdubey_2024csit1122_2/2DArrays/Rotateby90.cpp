#include <iostream>
using namespace std;


int main()
{
  int n,i,i2,j;
  cin>>n;
  int **arr = new int*[n];
  for(i=0;i<n;i++){
      arr[i] = new int[n];
      for(j=0;j<n;j++)
        cin>>arr[i][j];
  }
  int **arr2 = new int*[n];
  for(i=0;i<n;i++)
      arr2[i] = new int[n];
  i2 = -1;
  for(i=n-1;i>=0;i--){
      i2++;
      for(j=0;j<n;j++)
          arr2[j][i2] = arr[i][j];
  }
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          cout<<arr2[i][j]<<" ";
      }
      cout<<endl;
  }
}