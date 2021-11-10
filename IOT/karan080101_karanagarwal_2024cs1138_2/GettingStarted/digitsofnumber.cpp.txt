#include<iostream>
using namespace std;
void print_each_digit(unsigned long long int x)
{
    if(x >= 10)
       print_each_digit(x / 10);

    int digit = x % 10;

    cout << digit << '\n';
}
int main(){
	unsigned long long int i;
	cin >> i;
	print_each_digit(i);
	return 0;
}