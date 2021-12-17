#include <iostream>
#include <exception>
using namespace std;

class CustomQueue
{
public:
	int *arr;
	int sizeQ;
	int front;
	int arrSize;

	CustomQueue(int cap)
	{
		sizeQ = 0;
		front = 0;
		arr = new int[cap];
		arrSize = cap;
	}

	int size()
	{
		return this->sizeQ;
	}

	void add(int data)
	{
		if (this->sizeQ != this->arrSize && this->front < this->arrSize)
			this->arr[this->front + this->sizeQ++] = data;
		else
			cout << "Queue overflow" << endl;
	}

	int peek()
	{
		if (this->sizeQ != 0)
			return this->arr[this->front];
		cout << "Queue underflow" << endl;
		return -1;
	}

	int remove()
	{
		if (this->sizeQ != 0)
		{
			this->sizeQ--;
			return this->arr[this->front++];
		}
		cout << "Queue underflow" << endl;
		return -1;
	}

	void display()
	{
		for (int i = this->front; i < (this->front + this->sizeQ); i++)
		{
			cout << this->arr[i] << " ";
		}
		cout << "\n";
	}
};

int main()
{
	int n;
	cin >> n;
	CustomQueue q(n);
	string str;
	cin >> str;

	while (str != "quit")
	{
		if (str == "add")
		{
			int val;
			cin >> val;
			q.add(val);
		}
		else if (str == "remove")
		{
			int val = q.remove();
			if (val != -1)
			{
				cout << val << endl;
			}
		}
		else if (str == "peek")
		{
			int val = q.peek();
			if (val != -1)
			{
				cout << val << endl;
			}
		}
		else if (str == "size")
		{
			cout << q.size() << endl;
		}
		else if (str == "display")
		{
			q.display();
		}
		cin >> str;
	}
	return 0;
}
