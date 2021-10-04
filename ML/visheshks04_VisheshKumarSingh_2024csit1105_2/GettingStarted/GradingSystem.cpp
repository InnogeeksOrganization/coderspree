#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    if(marks > 90)
        cout<<"excellent";
    else if(marks>80)
        cout<<"good";
    else if(marks>70)
        cout<<"fair";
    else if(marks>60)
        cout<<"meets expectations";
    else
        cout<<"below par";
    
    
}
