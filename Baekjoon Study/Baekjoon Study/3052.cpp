#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int cnt, count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];

		arr[i] %= 42; // arr[i] = arr[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		cnt = 0;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				cnt++;
			}
		}

		if (cnt == 0)
		{
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}