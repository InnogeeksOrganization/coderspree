#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
 
 
 int temp=n;
 int nod=0; //number of digits
 
 while(temp>0){
     temp/=10;
     nod++;
 }
 
 k=k%nod; 
 if(k<0){ //for negative k
     k+=nod;
 }
 
 
 int divi=1,mul=1;
 for(int i=1;i<=nod;i++){
     if(i<=k){
         divi*=10;
     }
     else{
         mul*=10;
     }
 }
 
 int q=n/divi;
 int r=n%divi;
 r=r*mul+q;
 cout<<r;
 
 

return 0;
}