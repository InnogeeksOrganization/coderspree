#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++)
    {
        bool check = true;
        
        int n;
        cin>>n;
        
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                check = false;
                cout<<"not prime"<<endl;
                break;
            }
        }
        
        if(check==true)
        {
            cout<<"prime"<<endl;
        }
    }

    //write your code here
    
}
