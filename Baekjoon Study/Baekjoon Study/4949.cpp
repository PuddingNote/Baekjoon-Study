#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> s;

	string input;
	while (true)
	{
		getline(cin, input);
		if (input == ".")
		{
			break;
		}

		bool check = true;
		for (int i = 0; i < input.size(); i++)
		{	
			if (input[i] == '(' || input[i] == '[')		// ���� ��ȣ�� ���ÿ� �ֱ�
			{
				s.push(input[i]);
			}
			else if (input[i] == ')')
			{
				if (s.empty() || s.top() != '(')		// �ݴ� ��ȣ�� ¦���缭 ¦�� ������ pop
				{
					check = false;
					break;
				}
				s.pop();
			}
			else if (input[i] == ']')
			{
				if (s.empty() || s.top() != '[')		// �ݴ� ��ȣ�� ¦���缭 ¦�� ������ pop
				{
					check = false;
					break;
				}
				s.pop();
			}
		}

		// ��ȣ ¦ �˻� ��, ���ÿ� �����ִ� ��ȣ�� ������ ������ ���� �ʴ� ��
		if (!s.empty())
		{
			check = false;
			while (!s.empty())
			{
				s.pop();
			}
		}

		if (check)
		{
			cout << "yes" << '\n';
		}
		else
		{
			cout << "no" << '\n';
		}
	}

	return 0;
}