#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int inv=0;
    int op=1;
    while(n!=0){
        int od=n%10;
        int id=op;
        int ip=od;
        inv+=id*(int)pow(10,ip-1);
        n=n/10;
        op++;
    }
    cout<<inv;
}