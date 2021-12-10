#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class TwoStack
{
public:
	vector<int> data;
	int tos1;
	int tos2;

	TwoStack(int cap)
	{
		this->data = vector<int>(cap, 0);
		this->tos1 = -1;
		this->tos2 = cap;
	}

	int size1()
	{
		return this->tos1 + 1;
	}

	int size2()
	{
		return this->data.size() - this->tos2;
	}

	void push1(int val)
	{
		if (this->tos1 + 1 == this->tos2)
			cout << "Stack overflow" << endl;
		else
			this->data[++this->tos1] = val;
	}

	void push2(int val)
	{
		if (tos2 == tos1 + 1)
			cout << "Stack overflow" << endl;
		else
			this->data[--this->tos2] = val;
	}

	int pop1()
	{
		if (this->size1() == 0)
		{
			cout << "Stack underflow" << endl;
			return -1;
		}
		return this->data[this->tos1--];
	}

	int pop2()
	{
		if (this->size2() == 0)
		{
			cout << "Stack underflow" << endl;
		}
		return this->data[this->tos2++];
	}

	int top1()
	{
		if (this->size1() == 0)
		{
			cout << "Stack underflow" << endl;
			return -1;
		}
		return this->data[this->tos1];
	}

	int top2()
	{
		if (this->size2() == 0)
		{
			cout << "Stack underflow" << endl;
		}
		return this->data[this->tos2];
	}
};

int main()
{
	string str;

	int cap;
	cin >> cap;
	TwoStack st(cap);

	while (true)
	{
		getline(cin, str);
		if (str[0] == 'q')
		{
			break;
		}
		else if (str[0] == 'p' && str[4] == '1')
		{
			string ss = str.substr(6, 2);
			int n = stoi(ss);
			st.push1(n);
		}
		else if (str[0] == 't' && str[3] == '1')
		{
			int tp = st.top1();
			if (tp != -1)
				cout << tp << endl;
		}
		else if (str[0] == 'p' && str[3] == '1')
		{
			int tp = st.pop1();
			if (tp != -1)
				cout << tp << endl;
		}
		else if (str[0] == 'p' && str[4] == '2')
		{
			string ss = str.substr(6, 2);
			int n = stoi(ss);
			st.push2(n);
		}
		else if (str[0] == 't' && str[3] == '2')
		{
			int tp = st.top2();
			if (tp != -1)
				cout << tp << endl;
		}
		else if (str[0] == 'p' && str[3] == '2')
		{
			int tp = st.pop2();
			if (tp != -1)
				cout << tp << endl;
		}
	}
	return 0;
}