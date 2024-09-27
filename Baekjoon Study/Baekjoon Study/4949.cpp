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
			if (input[i] == '(' || input[i] == '[')		// ¿©´Â °ýÈ£¸¦ ½ºÅÃ¿¡ ³Ö±â
			{
				s.push(input[i]);
			}
			else if (input[i] == ')')
			{
				if (s.empty() || s.top() != '(')		// ´Ý´Â °ýÈ£·Î Â¦¸ÂÃç¼­ Â¦ÀÌ ¸ÂÀ¸¸é pop
				{
					check = false;
					break;
				}
				s.pop();
			}
			else if (input[i] == ']')
			{
				if (s.empty() || s.top() != '[')		// ´Ý´Â °ýÈ£·Î Â¦¸ÂÃç¼­ Â¦ÀÌ ¸ÂÀ¸¸é pop
				{
					check = false;
					break;
				}
				s.pop();
			}
		}

		// °ýÈ£ Â¦ °Ë»ç ÈÄ, ½ºÅÃ¿¡ ³²¾ÆÀÖ´Â °ýÈ£°¡ ÀÖÀ¸¸é ±ÕÇüÀÌ ¸ÂÁö ¾Ê´Â °Í
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