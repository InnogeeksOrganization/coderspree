#include <iostream>
using namespace std;
void reset(bool arr[],int n){
    for(int i=0 ; i<n ; i++)
        arr[i] = false;
}

int main(){
    int n,i,j;
    cin >> n;
    bool arr[n];
    int left=0,right=n-1;
    for(i=0 ; i<n ; i++){
        j=0;
        reset(arr,n);
        arr[left++] = true;
        //cout<<arr[left-1]<<" "<<left-1<<" ";
        arr[right--] = true;
        while(j<n){
          //cout<<arr[j]<<" ";
            if(arr[j]==true)
              cout<<"*\t";
            else
              cout<<"\t";
            j++;
        }
        cout<<endl;
    }
    //write your code here

}