#include <iostream>
using namespace std;

int main()
{
	int X, N;
	int a, b;
	int temp = 0;

	cin >> X >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		temp += a * b;
	}

	if (X == temp)
	{
		cout << "Yes" << '\n';
	}
	else
	{
		cout << "No" << '\n';
	}

	return 0;
}