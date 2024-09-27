#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int N;
	cin >> N;

	int count = 1;
	while (N--)
	{
		int input;
		cin >> input;

		if (input == count)
		{
			count++;
		}
		else
		{
			while (!s.empty() && s.top() == count)
			{
				s.pop();
				count++;
			}

			s.push(input);
		}
	}

	while (!s.empty())
	{
		if (s.top() == count)
		{
			s.pop();
			count++;
		}
		else
		{
			break;
		}
	}

	if (s.empty())
	{
		cout << "Nice" << '\n';
	}
	else {
		cout << "Sad" << '\n';
	}

	return 0;
}