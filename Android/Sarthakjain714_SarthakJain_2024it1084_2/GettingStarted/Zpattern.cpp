#include<iostream>
using namespace std;
int main(){
   int rows=5;
   for(int i=0;i<rows;i++){
      for(int j=0;j<rows;j++){
          if(i==0 ||i==rows-1||j==rows-i-1){
              cout<<"* ";
          }
          else{
              cout<<"  ";
          } 
      }
      cout<<"\n";
   }

}