#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
if(marks>90){
    cout<<"excellent";
}
else if(marks<=90 && marks>80){
    cout<<"good";
}
else if(marks<=80 && marks>70){
    cout<<"fair";
}
else if(marks<=70 && marks>60){
    cout<<"meets expectations";
}
if(marks<60){
    cout<<"below par";
}
 return 0;   
}