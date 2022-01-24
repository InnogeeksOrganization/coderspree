#include <iostream>
using namespace std;



int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    
    int arr[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    int minrow=0;
    int mincol=0;
    int maxrow=n-1;
    int maxcol=m-1;
    
    int tne=n*m;
    int count=0;
    
    while(count<tne){
        if(count<tne){
        for(int i=minrow;i<=maxrow;i++){
            cout<<arr[i][mincol];
            cout<<"\n";
            count++;
        }
        }
        mincol++;
        
        if(count<tne){
         for(int i=mincol;i<=maxcol;i++){
            cout<<arr[maxrow][i];
            cout<<"\n";
            count++;
        }
        }
        maxrow--;
        
        if(count<tne){
        for(int i=maxrow;i>=minrow;i--){
            cout<<arr[i][maxcol];
            cout<<"\n";
            count++;
        }
        }
        maxcol--;
        
        if(count<tne){
        for(int i=maxcol;i>=mincol;i--){
            cout<<arr[minrow][i];
            cout<<"\n";
            count++;
        }
        }
        
        minrow++;
    }
    
  return 0;
}