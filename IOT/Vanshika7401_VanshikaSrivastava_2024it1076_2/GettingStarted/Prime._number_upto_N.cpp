
#include <bits/stdc++.h>
using namespace std;

void inRange(int L, int R)
{
	int flag;

	
	for (int i = L; i <= R; i++) {

		
		if (i == 1 || i == 0)
			continue;

		flag = 1;

		
		for (int j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1)
			cout << i << " ";
	}
}


int main()
{
	
	int low,high;
    cin>>low;
    cin>>high;


	inRange(low,high);

	return 0;
}
