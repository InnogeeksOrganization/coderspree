#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int sp=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<"";
        }
        for(int k=1;k<=n;k++)
        {
            if((k+i == (n+1))||(k==i))
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<i;j++)
    //     {
    //         cout<<"";
    //     }
    //     for(int k=1;k<=i;k++)
    //     {
    //         if(k==i)
    //         {
    //             cout<<"*";
    //         }
    //         else
    //         {
    //             cout<<"\t";
    //         }
    //     }
    //     cout<<"\n";
    // }
    

}