#include <iostream>
#include <cmath>
using namespace std;

class CantorSetClass
{
private:
	int size;
	char* arr;

public:
	void CantorSetStart(int N)
	{
		size = pow(3, N);
		arr = new char[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = '-';
		}

		CantorSet(0, size);
	}
	void CantorSet(int start, int length)
	{
		if (length == 1)
		{
			return;
		}

		int third = length / 3;
		int middle_start = start + third;
		int middle_last = start + (third * 2);

		for (int i = middle_start; i < middle_last; i++)
		{
			arr[i] = ' ';
		}

		CantorSet(start, third);
		CantorSet(middle_last, third);
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i];
		}
		cout << '\n';

		delete[] arr;
	}
};

int main()
{
	int N;
	CantorSetClass c;

	while(cin >> N)
	{
		c.CantorSetStart(N);
		c.Print();
	}

	return 0;
}