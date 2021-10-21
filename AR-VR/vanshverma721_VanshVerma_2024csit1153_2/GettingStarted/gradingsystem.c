#include<iostream>
using namespace std;
int main()
{
     int marks;
    scanf("%d",&marks);
 if(marks>90)
 {
     printf("excellent");
 }
 
 if(marks>80 && marks<=90)
 {
     printf("good");
 }
 
 if(marks>70 && marks<=80)
 {
     printf("fair");
 }
 
  if(marks>60 && marks<=70)
 {
     printf("meets expectations");
 }
 
  if(marks<60)
 {
     printf("below par");
 }
 
 return 0;
 
}