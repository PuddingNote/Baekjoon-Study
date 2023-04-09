#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int input;
	int arr[10001] = { 0, };
	for (int i = 1; i <= N; i++)
	{
		cin >> input;
		arr[input] += 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= arr[i]; j++)
		{
			cout << i << '\n';
		}
	}

	return 0;
}