#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    
    for (int i=0;i<5;i++){
        
        if(i == 0 || i == 4)
            for(int j=0;j<5;j++){
                cout<<"*";
            }
            
        else{
            for(int j=0;j<5;j++){
                if(j == 5-i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        
        cout<<endl;
            
    }

}

