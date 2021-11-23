#include<iostream>
using namespace std;

int main(){
    int i,j,n1,m1,n2,m2,k=0;
    cin>>n1>>m1;
    int arr1[n1][m1];
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++)
            cin>>arr1[i][j];
    }
    cin>>n2>>m2;
    int arr2[n2][m2];
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++)
            cin>>arr2[i][j];
    }
    if(m1!=n2){
        cout<<"Invalid input";
        return 0;
    }
    int arr3[n1][m2];
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++)
            arr3[i][j]=0;
    }
    for(i=0;i<n1;i++){
        k=0;
        while(k<m2){
            for(j=0;j<m1;j++)
                arr3[i][k] += arr1[i][j]*arr2[j][k];
            k++;
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++)
            cout<<arr3[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}