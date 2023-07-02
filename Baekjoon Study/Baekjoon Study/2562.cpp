#include <iostream>
using namespace std;

int main()
{
	int input, max = 0, num;

	for (int i = 0; i < 9; i++)
	{
		cin >> input;

		if (input > max)
		{
			max = input;
			num = i + 1;
		}
	}

	cout << max << '\n' << num << '\n';

	return 0;
}