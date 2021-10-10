#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    if(marks > 90 )
        cout<<"excellent";
    else if(marks > 80 && marks <91)
        cout<<"good";
    else if(marks > 70 && marks < 81)
        cout<<"fair";
    else if(marks > 60 && marks <71)
        cout<<"meets expectations";
    else
        cout<<"below par";
    cout<<endl;
    
    //write your code here
    
}