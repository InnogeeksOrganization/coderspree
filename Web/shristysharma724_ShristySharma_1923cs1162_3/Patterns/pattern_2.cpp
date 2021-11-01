#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cout<<"enter number:";
    cin>>n;

     for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < (n- i); j++)
       {
           cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}