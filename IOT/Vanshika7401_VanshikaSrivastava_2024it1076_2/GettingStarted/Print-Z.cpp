#include<iostream>
using namespace std;


void alphabetPattern()
{
 
    int index, side_index, size;
 
  

 
    // Loop for printing the first row
    for (index = 0; index < 5; index++)
        cout << "*" << " ";
 
    cout << endl;
 
    // Main Loop for the rows from (2 to n-1)
    for (index = 1; index < 5 - 1; index++) {
 
        // Spaces for the diagonals
        for (side_index = 0; side_index < 2 * (5 - index - 1);
             side_index++)
            cout << " ";
 
        // Printing the diagonal values
        cout <<"*";
 
        cout << endl;
    }
 
    // Loop for printing the last row
    for (index = 0; index < 5; index++)
        cout << "*" << " ";
}
int main()
{

    alphabetPattern();
 
    return 0;
}