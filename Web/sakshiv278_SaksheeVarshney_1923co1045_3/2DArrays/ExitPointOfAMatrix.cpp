#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  int dir=0,i=0,j=0;
  while(true){
      dir=(dir+arr[i][j])%4;
      if (dir == 0) {
        j++;  
      } else if (dir == 1) {
        i++;  
      } else if (dir == 2) {
        j--;  
      } else if (dir == 3) {
        i--;  
      }
      
      if(i<0){
          i++;
          break;
      }
      else if(j<0){
          j++;
          break;
      }
      else if(i==n){
          i--;
          break;
      }
      else if(j==m){
          j--;
          break;
      }
      
  }
  cout<<i<<endl;
  cout<<j<<endl;

  return 0;
}