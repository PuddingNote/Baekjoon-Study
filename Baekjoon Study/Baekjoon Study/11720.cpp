#include <iostream>
using namespace std;

int main()
{
	int N, sum = 0;

	cin >> N;

	char* arr = new char[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i] - '0'; // 아스키코드값 0 = 48, 1 = 49, 2 = 50
	}

	cout << sum << '\n';

	delete[] arr;
	return 0;
}