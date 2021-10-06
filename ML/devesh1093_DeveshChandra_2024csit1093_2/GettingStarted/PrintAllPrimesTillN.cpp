#include <iostream>

void prime(int low, int high){
    for(int i=low; i<=high; i++){
            int flag=0;
        for(int j=2; j<(i/2); j++){
                
                if(i%j==0){
                    flag=1; 
                    break;
                }
                
            }
            if(flag==0){
                cout<<i<<'\n';
                
            }
        }
}
using namespace std;
int main(){
    int low, high;
    cin>>low>>high;
    if(low>=2 && high<1000000){
        prime(low,high);
    }

   return 0;

}
