#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, result;
	cin >> N;

	int* x = new int[N];
	int* y = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	sort(x, x + N);
	sort(y, y + N);

	result = (x[N - 1] - x[0]) * (y[N - 1] - y[0]);

	cout << result << endl;

	return 0;
}