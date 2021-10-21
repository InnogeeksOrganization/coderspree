#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int i=0,id,ip,od;
    int op=1;
    while(n!=0){
        od=n%10;
        id=op;
        ip=od;
        i=i+(id*(int)pow(10,ip-1));
        n=n/10;
        op++;
    }
    cout<<i;
}