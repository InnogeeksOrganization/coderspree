#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    //write your code here
for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0 || i==4)
                cout<<"*";
            else 
            {
                if(i+j==4)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}