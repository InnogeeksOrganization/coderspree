#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    if(marks>90){
        cout<<"excellent";
    }
    else if(marks>80 && marks<=90){
        cout<<"good";
    }
    else if(marks>70 && marks<=80){
        cout<<"fair";
    }
    if(marks>60 && marks<=70){
        cout<<"meets expectations";
    }
    if(60>marks){
        cout<<"below par";
    }
    return 0;
}