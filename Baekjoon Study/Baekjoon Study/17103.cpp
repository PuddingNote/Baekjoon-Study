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

// vector 사용했더니 시간초과
int main()
{
	const int maxLimit = 1000000;
	bool primeList[maxLimit];
	for (int i = 0; i < maxLimit; i++)
	{
		primeList[i] = false;
	}
	for (int i = 0; i < maxLimit; i++)
	{
		if (isPrime(i) == true)
		{
			primeList[i] = true;
		}
	}

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		int count = 0;
		for (int i = 2; i < N / 2 + 1; i++)					// 이중 for문으로 계산하니까 시간 초과
		{
			if (primeList[i] == true && primeList[N - i])
			{
				count++;
			}
		}
		cout << count << '\n';
	}

	return 0;
}