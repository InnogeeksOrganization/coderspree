#include<iostream>
using namespace std;
int main(int argc, char** agrc)
{
    //write your code here
    int i,j;
    for(i=1; i<6; i++)
        cout<<"*";
    cout<<endl;
    for(i=1; i<4; i++)
    {
        for(j=4; j>=1; j--)
        {
            if(i == j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=1; i<6; i++)
        cout<<"*";
    cout<<endl;
    return 0;
}
