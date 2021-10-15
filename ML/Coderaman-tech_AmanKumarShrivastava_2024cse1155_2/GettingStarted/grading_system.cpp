#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    
   if(marks>90)
   cout<<"excellent"<<"\n";
   else if(marks>80 && marks<=90)
   cout<<"good"<<"\n";
   else if(marks>70 && marks<=80)
   cout<<"fair"<<"\n";
   else if(marks>60 && marks<=70)
  cout<<"meets expectations"<<"\n";
   else 
   cout<<"below par"<<"\n";
}