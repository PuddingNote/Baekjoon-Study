#include <iostream>
using namespace std;

int d(int num)
{
	int temp = num;

	while (num != 0)
	{
		temp = temp + (num % 10);
		num = num / 10;
	}

	return temp;
}

int main()
{
	int check[10001] = { 0, };
	int n;

	for (int i = 1; i < 10001; i++) 
	{
		n = d(i);
		if (n < 10001) 
		{
			check[n] = 1;
		}
	}

	for (int i = 1; i < 10001; i++) 
	{
		if (check[i] == 0) 
		{
			cout << i << endl;
		}
	}

	return 0;
}