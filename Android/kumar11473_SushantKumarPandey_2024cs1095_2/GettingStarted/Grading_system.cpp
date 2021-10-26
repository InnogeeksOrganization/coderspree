#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    int a;
    if(marks>90)
      a=1;
      else if(marks>80 && marks<=90)
      a=2;
      else if(marks>70 && marks<=80)
      a=3;
      else if(marks>60 && marks<=70)
      a=4;
      else if(marks<=60)
      a=5;
      
    switch(a) { 
        case 1:
        cout<<"excellent"<<endl;
        break;
        
        case 2:
        cout<<"good"<<endl;
        break;
        
        case 3:
        cout<<"fair"<<endl;
        break;
        
        case 4:
        cout<<"meets expectations"<<endl;
        break;
        
        case 5:
        cout<<"below par"<<endl;
        break;
        
        default:
        break;
    }

   return 0;
    
}