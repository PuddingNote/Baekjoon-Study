#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int result = 0;
	for (int i = 1; i * i <= N; i++)
	{
		result++;
	}

	cout << result << '\n';

	return 0;
}