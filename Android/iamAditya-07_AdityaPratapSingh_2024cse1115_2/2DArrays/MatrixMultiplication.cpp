#include<iostream>
using namespace std;
int main() {
//     Write your code here.

int n1;
int m1;

cin>>n1;
cin>>m1;

int a1[n1][m1];

for(int i=0;i<n1;++i){
    for(int j=0;j<m1;++j){
        cin>>a1[i][j];
    }
}

int n2;
int m2;

cin>>n2;
cin>>m2;
int a2[n2][m2];

for(int i=0;i<n2;++i){
    for(int j=0;j<m2;++j){
        cin>>a2[i][j];
    }
}

int a3[n1][m2];
for(int i=0;i<n1;++i)
        for(int j=0;j<m2;++j)
        {
            a3[i][j]=0;
        }

if(m1==n2){
   for(int i=0;i<n1;++i){
        for(int j=0;j<m2;++j){
            for(int k=0;k<m1;++k)
            {
                a3[i][j]+=a1[i][k]*a2[k][j];
                
            }
            cout<<a3[i][j]<<" ";
           
}
 cout<<"\n";
}
}
else{
    cout<<"Invalid input";
}

}