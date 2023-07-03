#include <iostream>
//#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	int i, j;
	int temp = 0;

	cin >> N >> M;

	int* arr = new int[N];

	for (int x = 0; x < N; x++)
	{
		arr[x] = x + 1;
	}

	for (int x = 0; x < M; x++)
	{
		cin >> i >> j;

		//swap(arr[i - 1], arr[j - 1]);
		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}

	for (int x = 0; x < N; x++)
	{
		cout << arr[x] << " ";
	}

	return 0;
}