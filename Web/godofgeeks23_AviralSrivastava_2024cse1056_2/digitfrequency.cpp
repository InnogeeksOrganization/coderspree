#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    string number;
    char digit;
    cin>>number>>digit;
    int count=0;
    for(int i=0;i<number.length();i++)
        if(digit==number[i])
            count++;
    cout<<count;
    return 0;
}