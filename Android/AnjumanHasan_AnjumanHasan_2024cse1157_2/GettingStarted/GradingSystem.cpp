#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    
    //write your code here
    if(marks>90)
    {
        cout << "excellent\n";
    }
    else if(marks<=90&&marks>80)
    {
        cout << "good\n";
    }
    else if(marks<=80&&marks>70)
    {
        cout << "fair\n";
    }
    else if(marks<=70&&marks>60)
    {
        cout << "meets expectations\n";
    }
    else if(marks<=60)
    {
        cout << "below par\n";
    }
   
    return 0;
}