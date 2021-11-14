/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if((i==j)||(i+j==n+1)){
            cout << "*\t" ;
        } else {
            cout << "\t";
        } 
        
    }
    cout << "\n";
}
    return 0;
}
