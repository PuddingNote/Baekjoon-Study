#include <iostream>

using namespace std;

int main()
{
	int N;
	int result = 0, count = 0, temp;
	
	cin >> N;

	while (count != N)
	{
		result++;
		temp = result;

		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				count++;
				break;
			}
			else temp /= 10;
		}
	}
	cout << result << '\n';

	return 0;
}