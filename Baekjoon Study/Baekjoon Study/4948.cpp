#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
	if (num < 2)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0)
	{
		return false;
	}

	int rt = sqrt(num);
	for (int i = 3; i <= rt; i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	int count;

	while (true)
	{
		count = 0;

		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int i = n + 1; i <= n * 2; i++)
		{
			if (isPrime(i) == true)
			{
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}