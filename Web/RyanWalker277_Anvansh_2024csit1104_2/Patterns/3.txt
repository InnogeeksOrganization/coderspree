#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n , spaces = n-1 , stars = 1 ,i,j,k;
    cin >> n;
    
    for(i = 1 ; i <= n ; i++){
        
        for(j = 1 ; j <= spaces ; j++){
            cout <<("\t");
        }
        
        for(k = 1 ; k <= stars ; k++){
            cout <<("*");
        }
        
        cout<<endl;
        
        spaces = spaces - 1  ;
        stars++ ;
        
    }
    
}