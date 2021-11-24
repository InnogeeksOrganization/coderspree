#include <iostream>
using namespace std;


int main()
{
  int n;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++)
        cin >> arr[i][j];
  }
  int head=0;
  int i=0;
  int j=0;
  while(head<n){
      while(i<n && j<n){
          cout<<arr[i++][j++]<<endl;
      }
      head++;
      i = 0;
      j = head;
  }

}