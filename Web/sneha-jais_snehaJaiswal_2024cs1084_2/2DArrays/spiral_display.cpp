#include <iostream>
using namespace std;


int main()
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
 int RS=0,CS=0,RE=n-1, CE=m-1;
 
  while(RS<=RE && CS<=CE){
      for(int row=RS; row<=RE; row++)
          cout<<arr[row][CS]<<"\n";
          CS++;
      if(CE<CS)
      break;
      
      for(int col=CS; col<=CE; col++)
          cout<<arr[RE][col]<<"\n";
          RE--;
      
      if(RE<RS)
      break;
      for(int row=RE; row>=RS; row--)
          cout<<arr[row][CE]<<"\n";
          CE--;
      
        if(CE<CS)
      break;
      
      for(int col=CE; col>=CS; col--)
          cout<<arr[RS][col]<<"\n";
          
          RS++;
          if(RE<RS)
      break;
      
      
  }

  return 0;
}