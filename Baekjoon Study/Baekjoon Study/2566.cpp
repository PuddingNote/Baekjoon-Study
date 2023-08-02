#include <iostream>
using namespace std;

#define SIZE 9

int main()
{
	int arr[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cin >> arr[i][j];
		}
	}

	int max = -1;
	int _i = 0, _j = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				_i = i + 1;
				_j = j + 1;
			}
		}
	}

	cout << max << '\n' << _i << ' ' << _j << '\n';

	return 0;
}