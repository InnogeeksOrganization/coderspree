#include <iostream>
#include<cmath>
using namespace std;
int isprime(int n){
    int count=0;
    int temp;
     for (int i = 2; i <= sqrt(n); i++)
    {
      if (n % i == 0)
       { count++;
        break;
       }
    }

    if (count == 0){
     temp=0;}
    else {
      temp=1;}

  return temp;
}
int main(){
    int low, high,check;
    cin >> low >> high;

   for(int i=low;i<=high;i++){
     check=isprime(i);
       if(check==0){
           cout<<i<<endl;
       }
   }
return 0;
}