#include <iostream>
using namespace std;

int main()
{
	char c[5][15] = { '\0' };

	for (int i = 0; i < 5; i++)
	{
		cin >> c[i];
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (c[j][i] != '\0')
			{
				cout << c[j][i];
			}
		}
	}

	return 0;
}