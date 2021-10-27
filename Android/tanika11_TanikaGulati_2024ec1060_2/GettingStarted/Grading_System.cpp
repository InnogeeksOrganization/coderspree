#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    //write your code here
    if(marks>90)
    printf("excellent");
    else if(marks>80 && marks<=90)
    printf("good");
    else if(marks>70 && marks<=80)
    printf("fair");
    else if(marks>60 && marks<=70)
    printf("meets expectations");
    else
    printf("below par");
}