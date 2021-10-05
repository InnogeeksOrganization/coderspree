#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    if(marks<=60){
        cout<<"below par\n";
    }
    else{
        if(marks>90){
            cout<<"excellent";
            
        }
        else if(marks<=90 && marks>80){
            cout<<"good";
        }
        else if(marks>70 && marks<=80){
            cout<<"fair";
        }
        else{
            cout<<"meets expectations";
        }
    }
    return 0;
}
