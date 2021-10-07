#include<iostream>
using namespace std;
int main(int argc, char** agrc){
   for(int i=5;i>0;i--)
   {
       if(i==5||i==1){
            for(int j=1;j<=5;j++){
            cout<<"*";
            }
            cout<<"\n";
       }
       else
       {
           for(int k=1;k<=5;k++){
           if(k!=i)
           cout<<" ";
           else
           cout<<"*";
           }
       cout<<"\n";
       }
   }
}