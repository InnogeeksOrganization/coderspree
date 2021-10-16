#include <iostream>
using namespace std;
int main(){
    int low, high;
    cin >> low >> high;
    int i,j;
    for(i=low;i<=high;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if((i%j)==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}