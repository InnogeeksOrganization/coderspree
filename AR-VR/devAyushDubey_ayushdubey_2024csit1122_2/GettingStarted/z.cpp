#include<iostream>
using namespace std;

int main()
{
int i,j;
for(i=1;i<=5;i++){
    if(i==1 || i==5){
        for(j=1;j<=5;j++)
            cout<<"*";
        cout<<endl;
    }
    else{
        for(j=1;j<=5-i;j++)
            cout<<" ";
        cout<<"*"<<endl;
    }
}
}