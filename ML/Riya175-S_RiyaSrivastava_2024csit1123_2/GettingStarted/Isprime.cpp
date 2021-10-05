#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    while(t--)
    {
        int i, j, num, temp=0;
        cin>>num;
        for(i=2; i<=num/2; i++)
        {
            if(num==2)
            {
                cout<<"prime\n";
            }
            else if(num%i == 0)
            {
                temp=1;
                cout<<"not prime\n";
                break;
            }
        }
        if(temp==0)
        {
            cout<<"prime\n";
        }
    }
    return 0;
}