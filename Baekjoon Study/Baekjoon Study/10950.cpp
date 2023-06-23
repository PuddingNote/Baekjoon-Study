#include <iostream>
using namespace std;

int main()
{
	int T, A, B, temp[100];

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;

		temp[i] = A + B;
	}

	for (int i = 0; i < T; i++)
	{
		cout << temp[i] << '\n';
	}

	return 0;
}