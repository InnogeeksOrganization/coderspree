#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    if (n1 > n2)
    {
        int j = 0;
        for(int i = n1 - n2; i < n1; i++)
        {
            a1[i] = a1[i] + a2[j];
            j++;
        }
        for (int i = 0; i < n1; i++)
            cout << a1[i] << endl;
    }
    else
    {
        int j = 0;
        for(int i = n2 - n1; i < n2; i++)
        {
            a2[i] = a2[i] + a1[j];
            j++;
        }
        for (int i = 0; i < n2; i++)
            cout << a2[i] << endl;
    }
}