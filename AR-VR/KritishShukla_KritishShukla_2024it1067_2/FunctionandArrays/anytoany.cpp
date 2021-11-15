#include<iostream>
#include<cmath>
using namespace std;

int AnyToDec(int n, int b)
 {
    int rem,num=0,i=0;
    while(n>0)
	{
        rem = n%10;
        n=n/10;
        num = num + rem*pow(b,i++);
    }
    return num;
//write your code here.
}

void DecToAny(int n, int b)
 {
    int binary[9],i=0;
    for(i=0;i<9;i++)
        binary[i]=-1;
    i=0;
    while(n>0)
	{
        binary[i++]=n%b;
        n = n/b;
    }
    for(i=8;i>=0;i--)
	{
        if(binary[i] != -1)
            cout<<binary[i];
    }


}


int main() {
  int n;
  int b1,b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToDec(n, b1);
  DecToAny(res,b2);
  
}