#include <iostream>

using namespace std;

int main()
{
	int N, M;
	int i, j, k;

	cin >> N >> M;

	int* basket = new int[N];
	
	for (int x = 0; x < N; x++)
	{
		basket[x] = 0;
	}

	for (int x = 0; x < M; x++)
	{
		cin >> i >> j >> k;
		for (int y = i - 1; y < j; y++)
		{
			basket[y] = k;
		}
	}

	for (int x = 0; x < N; x++)
	{
		cout << basket[x] << " ";
	}

	delete[] basket;

	return 0;
}