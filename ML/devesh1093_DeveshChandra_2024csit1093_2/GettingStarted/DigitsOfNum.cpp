#include<iostream>
using namespace std;
void printdigit(int n)
{ if(n>=10){
   printdigit(n/10);
}
    int rem =n%10;
    cout<<rem<<'\n';
    
   
}
int main(){
	int n;
	cin >> n;
	if(n>=1 && n<10e9)
    	printdigit(n);
	
	return 0;
}
