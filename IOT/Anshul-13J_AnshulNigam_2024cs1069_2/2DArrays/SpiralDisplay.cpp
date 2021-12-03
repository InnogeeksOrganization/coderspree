#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
}

int main(int argc, char** argv)
{


  int mat[mr][mc] = {0};
  int n, m,trav=0,i=0,j=0,min_r=0,max_r,min_c=0,max_c;
  cin >> n >> m;
  max_r=n;  max_c=m;
  inputBound(mat, n, m);
  while(trav< (m*n))
  {
      for(i=min_r;i<max_r && trav< (m*n);i++)
      {
          cout<<mat[i][min_c]<<endl;
          trav++;
      }
      min_c++;
      for(j=min_c;j<max_c && trav< (m*n);j++)
      {
          cout<<mat[max_r-1][j]<<endl;
          trav++;
      }
      max_r--;
      for(i=max_r-1;i>=min_r && trav< (m*n);i--)
      {
          cout<<mat[i][max_c-1]<<endl;
          trav++;
      }
      max_c--;
      for(j=max_c-1;j>=min_c && trav< (m*n);j--)
      {
          cout<<mat[min_r][j]<<endl;
          trav++;
      }
      min_r++;
  }
  
  return 0;
}