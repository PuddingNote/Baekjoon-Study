#include <iostream>

using namespace std;

int main()
{
	int N;
	int result = 0;

	cin >> N;

	for (int i = 1; i * i <= N; i++)
	{
		result++;
	}

	cout << result << '\n';

	return 0;
}