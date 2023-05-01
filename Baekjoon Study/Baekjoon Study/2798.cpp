#include <iostream>

using namespace std;

int main()
{
	int N, M;
	int sum = 0, result = 0;
	int min = 100000;

	cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (M - sum < min && M - sum >= 0) {
					min = M - sum;
					result = sum;
				}
			}
		}
	}

	cout << result << endl;

	return 0;
}