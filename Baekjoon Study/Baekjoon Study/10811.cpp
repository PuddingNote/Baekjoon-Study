#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	int i, j;

	cin >> N >> M;

	int* arr = new int[N];
	for (int x = 0; x < N; x++)
	{
		arr[x] = x + 1;
	}

	for (int x = 0; x < M; x++) // while(M--)
	{
		cin >> i >> j;

		for (int y = 0; y <= (j - i) / 2; y++)
		{
			swap(arr[y + i - 1], arr[j - y - 1]);
		}

	}

	for (int x = 0; x < N; x++)
	{
		cout << arr[x] << " ";
	}

	return 0;
}