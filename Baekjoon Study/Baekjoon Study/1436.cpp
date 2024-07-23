// #1
#include <iostream>
using namespace std;

bool contain666(int number) 
{
	while (number != 0) 
	{
		if (number % 1000 == 666) 
		{
			return true;
		}
		number /= 10;
	}
	return false;
}

int main()
{
	int N;
	int number = 0, count = 0;

	cin >> N;

	while (true)
	{
		if (contain666(number))
		{
			count++;
		}
		if (count == N)
		{
			cout << number << '\n';
			break;
		}
		number++;
	}

	return 0;
}

// #2
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 0;
	int number = 666;

	while (true) 
	{
		if (to_string(number).find("666") != string::npos)
		{
			count++;
		}
		if (count == N)
		{
			cout << number << '\n';
			break;
		}
		number++;
	}

	return 0;
}

// 내가 처음에 한거
#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int result = 0, count = 0, temp;

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