#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char A[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 && 0<j<5)
            {
                A[i][j]= '*';
            }
            else if(i+j==4)
            {
                A[i][j]='*';
            }
            else if (i==4 && 0<j<5)
            {
                A[i][j]='*';
            }
            else
            A[i][j]=' ';
    
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout << A[i][j];
            if(j==4)
            {
                cout << "\n";
            }
        }
    }

    return 0;
}