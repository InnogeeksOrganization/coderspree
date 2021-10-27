#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
   int temp=n,div,a;
   int count=0;
    while(temp>0){
        count++;
       temp=temp/10;
    }
  
    while(n>=10){
        count=count-1;
        div=pow(10,count);
        a=n/div;
         cout<<a<<" ";
        n=n%div;
       
    }
    cout<<n;
    return 0;
}
