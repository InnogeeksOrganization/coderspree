#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i == 0 || i==4)
                cout<<"*";
            else if(j == (4-i))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}