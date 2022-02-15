#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
  int n;
  cin >> n;
  int arr[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];
      

//Transpose
 for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    
    //Row reverse
    
    for(int i=0;i<n;i++){
        int li=0,ri=n-1;
        while(li<ri){
            int temp=arr[i][li];
            arr[i][li]=arr[i][ri];
            arr[i][ri]=temp;
            li++;
            ri--;
        }
    }
    
    //output
    for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++)
      cout<<arr[i][j]<<" ";
      cout<<endl;
  }

    
    
}