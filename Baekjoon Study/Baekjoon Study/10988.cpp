#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int check = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[s.length() - 1 - i])
		{
			check = 1;
		}
		else
		{
			check = 0;
			break;
		}
	}

	cout << check << endl;

	/*for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] != s[s.length() - 1 - i])
		{
			cout << 0 << endl;
			return 0;
		}
	}

	cout << 1 << endl;*/

	return 0;
}