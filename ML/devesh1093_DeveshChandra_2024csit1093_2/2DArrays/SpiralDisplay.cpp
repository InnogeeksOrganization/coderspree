#include <iostream>
using namespace std;

int main(){
    int n,m,i,j,r_max,r_min,c_max,c_min,total,count;
    cin>>n>>m;
    int arr[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    total=n*m; count=0;
    r_min=c_min=0;
    c_max=m-1; r_max=n-1;
    while(count<total){
        for(i=r_min; i<=r_max && count<total; i++){
            cout<<arr[i][c_min]<<'\n';
            count++;
        }
        
        for(i=++c_min; i<=c_max && count<total; i++){
            cout<<arr[r_max][i]<<'\n';
            count++;
        }
        
        for(i=--r_max; i>=r_min && count<total; i--){
            cout<<arr[i][c_max]<<'\n';
            count++;
        }
        for(i=--c_max; i>=c_min && count<total; i--){
            cout<<arr[r_min][i]<<'\n';
            count++;
        }
        r_min++;
        
        
    }
    
    
    
    
    return 0; 
    
}
