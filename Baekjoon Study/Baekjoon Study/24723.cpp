#include <iostream>

using namespace std;

// 1��Ǯ��
int main()
{
	int N;
	int result = 1;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		result *= 2;
	}

	cout << result;

	return 0;
}

// 2��Ǯ��

int main()
{
	int N;

	cin >> N;

	cout << (1 << N);

	return 0;
}