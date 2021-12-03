#include <iostream>
using namespace std;


const int mr = 100, mc = 100;

int** input(int** mat, int n, int m)
{
  mat = new int* [n];
  for (int i = 0; i < n; i++)
  {
    int* arr = new int[m];
    for (int j = 0; j < m; j++)
    {
      cin >> arr[j];
    }
    mat[i] = arr;
  }
  return mat;
}


int main(int argc, char** argv)
{
  int d=0,m,n;  //0-e 1-s 2-w 3-n
  cin >> n >> m;
  int** mat = input(mat, n, m);
  int i=0,j=0;
  while(1)
  {
      d= (d+mat[i][j] )%4;
      if(d==0)
        j++;
      else if(d==1)
        i++;
      else if(d==2)
        j--;
      else if(d==3)
        i--;
      if(i<0)
      {
        i++;
        break;
      }
      else if(j<0)
      {
        j++;
        break;
      }
      else if(i==n)
      {
        i--;
        break;
      }
      else if(j==m)
      {
        j--;
        break;
      }
  }
  cout<<i<<endl<<j;
  return 0;
}