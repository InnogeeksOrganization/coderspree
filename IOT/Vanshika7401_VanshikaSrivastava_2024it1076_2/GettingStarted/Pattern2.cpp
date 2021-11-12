#include <iostream>
using namespace std;
void invertedHalfPyramid(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=i; j<6; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
}
int main(int argc, char **argv){
    int n;
    cin >> n;
    invertedHalfPyramid(n);
    //write your code here
    
}