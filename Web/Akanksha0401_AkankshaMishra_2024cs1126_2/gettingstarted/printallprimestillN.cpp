
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv){
    int low, high,count;
    cin >> low >> high;
    
    //write your code here
    for(int i=low;i<=high;i++)
     {
         count=2;
         for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {cout<<i;
        cout<<"\n";
        }
     }
}