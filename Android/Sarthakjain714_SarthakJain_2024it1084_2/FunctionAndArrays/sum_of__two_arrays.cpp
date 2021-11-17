#include<iostream>
using namespace std;

int main(){
    int size1;
    cin>>size1;
    int array[size1];
    for(int i=0;i<size1;i++){
        cin>>array[i];
    }
    int size2;
    cin>>size2;
    int array2[size2];
    for(int i=0;i<size2;i++){
        cin>>array2[i];
    }

    int larger=size1;
    if(size2>size1){
        larger=size2;
    }
    int add[larger];
    int carry=0;
    for(int i=0;i<larger;i++){
        if(size1-1-i>=0 &&size2-1-i>=0){
            int temp=array[size1-1-i]+array2[size2-1-i]+carry;
            
            if(temp>9){
                temp=temp-10;
                add[larger-1-i]=temp;
                carry=1;
            }
            else {
                add[larger-1-i]=temp;
                carry=0;
            }
           
        }
        else if(size1-1-i<0){
            int temp= array2[size2-1-i]+carry;
            if(temp>9){
                temp=temp-10;
                add[larger-1-i]=temp;
                carry=1;
            }
            else {
                add[larger-1-i]=temp;
                carry=0;
            }
        }
        else if(size2-1-i<0){
            int temp= array[size1-1-i]+carry;
            if(temp>9){
                temp=temp-10;
                add[larger-1-i]=temp;
                carry=1;
            }
            else {
                add[larger-1-i]=temp;
                carry=0;
            }
        }
    }
    for(int i=0;i<larger-1;i++){
        cout<<add[i]<<" ";
    }
    if(add[larger-1]>9){
        cout<<add[larger-1]-10<<" ";
        cout<<1<<" ";
    }
    else{
        cout<<add[larger-1];
    }
}