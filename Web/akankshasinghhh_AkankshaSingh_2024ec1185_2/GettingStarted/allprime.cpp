#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    for(int i=low;i<=high;i++)
    {
        int div=2;
        while((div*div)<=i){
            if(i%div==0){
                break;
            }
            div++;
        }
        if(div*div>i){
            cout<<i<<"\n";
        }
    }
}