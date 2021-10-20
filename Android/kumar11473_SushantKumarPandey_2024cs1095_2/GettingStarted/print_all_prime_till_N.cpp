#include <iostream>
using namespace std;
int main(){
    int low, high,count=0,i,j;
    cin >> low;
    cin >> high;
    for(i=low;i<=high;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
                break; 
            }
        }
        if(count==0)
            cout<<i<<endl;
    }
    return 0;
}