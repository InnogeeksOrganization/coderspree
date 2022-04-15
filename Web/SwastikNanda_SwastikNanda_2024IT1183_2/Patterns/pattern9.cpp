#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int l=1;
    int a=2;
    for(int i=n;i>=1;i--)
    {
        if(i==((n/2)+1)){
         for(int j=n/2;j>0;j--){
            printf("\t");
        }   
        cout<<"*"<<endl;
        }
        else if(i>((n/2)+1)){
         for(int j=n-i;j>0;j--){
            printf("\t");
        }
        cout<<"*";
         for(int j=n-l;j>0;j--){
            printf("\t");
        }
        l=l+2;
        cout<<"*"<<endl;
        }
        else if(i<((n/2)+1)){
            
         for(int j=i-1;j>0;j--){
            printf("\t");
        }
        cout<<"*";
         for(int j=a;j>0;j--){
            printf("\t");
        }
        a+=2;
        cout<<"*"<<endl;
        }
        
    }
    return 0;
}