#include <iostream>
using namespace std;

int main()
{
	int X;
	int numerator = 0, denominator = 0;	// 분자:numerator, 분모:denominator
	int temp, count;

	cin >> X;

	count = 0;
	for (int i = 1; i <= X; i++)
	{
		temp = i;

		if (i % 2 == 0)
		{
			for (int j = 1; j <= i; j++)
			{
				numerator = j;
				denominator = temp;
				temp--;
				count++;
				if (X == count) break;
			}
		}
		else
		{
			for (int j = 1; j <= i; j++)
			{
				numerator = temp;
				denominator = j;
				temp--;
				count++;
				if (X == count) break;
			}
		}
		
		if (X == count) break;
	}

	cout << numerator << '/' << denominator << '\n';

	return 0;
}