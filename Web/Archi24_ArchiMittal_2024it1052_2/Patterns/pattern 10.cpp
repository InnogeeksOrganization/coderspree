#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n;
     
   
    cin >> n; 

    for(i = 1; i <= n; i++)
    {
    	for(j = 1; j <= n - i; j++)
		{
            cout << " ";
        }
        for(k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }	

    for(i = n - 1; i > 0; i--)
    {
    	for(j = 1; j <= n - i; j++)
		{
            cout << " ";
        }
        for(k = 1; k <= i * 2 - 1; k++)
        {
            if (k == 1 || k == i * 2 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
	
 	return 0;
}
