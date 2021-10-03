#include<iostream>
using namespace std;
int main(){
    //write your code here
    for(int i=1;i<6;i++)
    {
        if(i>1&&i<5)
        {
            for(int j=0;j<5-i;j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
        }
        else
        {
            for(int j=0;j<5;j++)
            cout<<"*";
            cout<<endl;
        }
    }
}