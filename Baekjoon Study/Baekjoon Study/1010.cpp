#include <iostream>

using namespace std;

int main()
{
	int T, N, M;
	long long result;
	int temp;

	cin >> T;
	while (T--)
	{
		cin >> N >> M;

		result = 1;
		temp = 1;

		for (int i = M; i > M - N; i--)
		{
			result *= i;
			result /= temp++;
		}
		cout << result << '\n';
	}

	return 0;
}