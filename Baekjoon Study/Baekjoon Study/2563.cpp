#include <iostream>
using namespace std;

int main()
{
	int N;
	int x, y;
	int result = 0;
	bool map[100][100] = { false, };

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (map[j][k] == false)
				{
					map[j][k] = true;
					result++;
				}
			}
		}
	}

	cout << result << '\n';

	return 0;
}