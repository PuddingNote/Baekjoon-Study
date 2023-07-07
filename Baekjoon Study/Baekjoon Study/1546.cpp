#include <iostream>
using namespace std;

int main()
{
	int N;
	double max = 0, result = 0;

	cin >> N;

	double* arr = new double[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] / max * 100;
	}

	for (int i = 0; i < N; i++)
	{
		result += arr[i];
	}

	result = result / N;

	cout << fixed;
	cout.precision(2);
	cout << result << '\n';

	delete[] arr;
	return 0;
}