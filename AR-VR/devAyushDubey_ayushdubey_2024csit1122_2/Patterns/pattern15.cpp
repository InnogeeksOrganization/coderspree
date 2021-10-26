#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin >> n;
    int sp=n/2;
    int nm = 1;
    int val = 1;
    int cval;
    for(i=0;i<n;i++){
        cval = val;
        for(j=1;j<=sp;j++)
            cout<<"\t";
        for(j=1;j<=nm;j++){
            cout<<cval<<"\t";
            if(j<=nm/2)
                cval++;
            else
                cval--;
        }
        if(i<n/2){
            sp--;
            nm += 2;
            val++;
        }
        else{
            sp++;
            nm -= 2;
            val--;
        }
        cout<<endl;
    }
    //write your code here
    
}