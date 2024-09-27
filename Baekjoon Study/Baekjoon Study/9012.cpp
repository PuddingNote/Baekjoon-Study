#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
	stack<char> s;

	int T;
	cin >> T;
	while(T--)
	{
		string input;
		cin >> input;

		for (int i = 0; i < input.size(); i++)
		{
			s.push(input[i]);
		}

		int a = 0, b = 0;
		while (!s.empty())
		{
			if (a > b)
			{
				while (!s.empty())
				{
					s.pop();
				}
				break;
			}

			if (s.top() == '(')
			{
				a++;
			}
			else if (s.top() == ')')
			{
				b++;
			}
			s.pop();
		}
		if (a == b)
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}

	return 0;
}