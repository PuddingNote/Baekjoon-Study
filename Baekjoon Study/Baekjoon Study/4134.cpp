#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long num)
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

	long long rt = sqrt(num);
	for (long long i = 3; i <= rt; i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

long long nextPrimeNum(long long A)
{
	if (A < 2)
	{
		return 2;
	}

	long long num = A;
	while (isPrime(num) == false)
	{
		num++;
	}

	return num;
}

int main()
{
	int N;
	long long M;		// int로 선언했다가 계속 실패떠서 정수 범위 문제인가 싶어서 바꿨더니 맞음

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M;

		cout << nextPrimeNum(M) << '\n';
	}

	return 0;
}