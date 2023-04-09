#include <iostream>
using namespace std;

int main()
{
	int N;
	int arr[1000];
	int temp = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}