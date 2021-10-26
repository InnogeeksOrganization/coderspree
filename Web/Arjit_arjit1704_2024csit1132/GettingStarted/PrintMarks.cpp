#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>90)
    cout<<"excellent";
    else if(marks>80&&marks<=90)
    cout<<"good";
    else if(marks>70&&marks<=80)
    cout<<"fair";
    else if(marks>60&&marks<=70)
    cout<<"meets expectations";
    else if(marks<=60)
    cout<<"below par";
    return 0;
}