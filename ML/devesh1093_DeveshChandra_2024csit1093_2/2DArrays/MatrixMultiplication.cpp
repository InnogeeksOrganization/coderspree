#include<iostream>
using namespace std;

int main(){
    int n1, n2, m1 , m2;
    int arr1[n1][m1];
    cin>>n1>>m1;
    for(int i=0; i<n1; i++){
        for(int j=0; j<m1; j++){
            cin>>arr1[n1][m1];
        }
    }
    cin>>n2>>m2;
   int arr2[n2][m2],arr3[n1][m2];
    for(int i=0; i<n2; i++){
        for(int j=0; j<m2; j++){
            cin>>arr2[n2][m2];
        }
    }
if(m1==n2){
    arr3[0][0]=0;
    for(int i=0; i<n1;i++){
        for(int j=0; j<m2; j++){
            for(int k=0; k<m1; k++){
                arr3[i][j]+=arr1[i][k]*arr2[j][k];
            }
        }
    }
}    
   
for(int i=0; i<n1; i++){
    for(int j=0; j<m2; j++){
        cout<<arr3[n1][m2]<<' ';
        
    }
    cout<<endl;
} 
return 0;
    
}
