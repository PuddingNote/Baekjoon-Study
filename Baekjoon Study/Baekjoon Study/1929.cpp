#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	if (M < 2)
	{
		M = 2;
	}

	bool isPrime;
	int rt;
	for (int i = M; i <= N; i++)
	{
		rt = sqrt(i);
		isPrime = true;

		if (i == 2)
		{
			cout << i << '\n';
			continue;
		}

		if (i % 2 == 0)
		{
			continue;
		}

		for (int j = 2; j <= rt; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime == true)
		{
			cout << i << '\n';
		}
	}
    
    return 0;
}