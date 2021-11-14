#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
            cout<<"\t";
        for(int j=1;j<=i;j++)
            cout<<"*\t";
        cout<<endl;
    }
}

// #include <iostream>
// using namespace std;

// int main(int argc, char **argv){
//     int n;
//     cin >> n;
//     for(int i=1;i<n;i++)
//     {
//         for(int j=1;j<n;j++)
//         {
//             if(i<=j)
//                 cout<<"*"<<"\t";
//             else
//                 cout<<" "<<"\t";
//         }
//         cout<<endl;
        
//     }
//     //write your code here

// }