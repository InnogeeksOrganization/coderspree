#include<iostream>
using namespace std;
int height = 5;
int width = (2 * height) - 1;
int abs(int d)
{
    return d < 0 ? -1 * d : d;
}
void printZ()
{
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1
                || j == counter)
                cout <<"*";
            else
                cout <<" ";
        }
        counter--;
        cout <<"\n";
    }
}
void printPattern(char character){
    switch (character){
    case 'Z':
        printZ();
        break;
    }
}
int main()
{
    char character = 'Z';
    printPattern(character);
    return 0;
}
