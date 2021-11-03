#include<iostream>
using namespace std;
int main(){
    
    int n1, m1;
    cin>>n1>>m1;
    int arr1[n1][m1];
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++)
        cin>>arr1[i][j];
    }
    
    int n2, m2;
    cin>>n2>>m2;
    int arr2[n2][m2];
    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++)
        cin>>arr2[i][j];
    }
    int ans[n1][m2];
       
    if(m1!=n2){
        cout<<"Invalid input";
    }
    
    
     for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
            ans[i][j]=0;
            for(int k=0; k<n2; k++){

               ans[i][j] += arr1[i][k] * arr2[k][j]; 
            }
        }
        
    }
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++){
        cout<<ans[i][j]<<" ";}
        cout<<endl;
    }
    
    
    return 0;
}