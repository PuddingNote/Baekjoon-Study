#include <iostream>
using namespace std;

int main()
{
	int X;
	int N = 0, D = 0; // 분자 분모
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
				N = j;
				D = temp;
				temp--;
				count++;
				if (X == count) break;
			}
		}
		else
		{
			for (int j = 1; j <= i; j++)
			{
				N = temp;
				D = j;
				temp--;
				count++;
				if (X == count) break;
			}
		}
		
		if (X == count) break;
	}

	cout << N << "/" << D << endl;

	return 0;
}