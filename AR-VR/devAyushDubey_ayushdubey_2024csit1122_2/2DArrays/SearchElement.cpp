#include <iostream>
using namespace std;

void search(int **arr,int n, int row,int key){
    int i;
    for(i=0;i<n;i++){
        if(arr[row][i]==key){
            cout<<row<<endl<<i;
            break;
        }
    }
    if(i==n)
        cout<<"Not Found";
}

int main()
{
  int n, key,i,j;
  cin >> n;
  int **arr = new int*[n];
  for(i=0;i<n;i++){
      arr[i] = new int[n];
      for(j=0;j<n;j++)
          cin>>arr[i][j];
  }
  cin>>key;
  i=0;
  for(i=0;i<n;i++){
      if(key>= arr[i][0] && key<=arr[i][n-1]){
          search(arr,n,i,key);
          break;
      }
  }
  if(i==n)
    cout<<"Not Found";
}