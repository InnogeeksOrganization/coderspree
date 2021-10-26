#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
  
    int l;
    for(int i=low;i<=high;i++){
        l=2;
       while(l*l<=i){
           if(i%l==0){
               break;
            }
            l++;
       }
        if(l*l>i){
            cout<<i<<endl;
        }
        
    }
return 0;
}