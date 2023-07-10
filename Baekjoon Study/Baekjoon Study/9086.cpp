#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T;
	string s;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> s;
		cout << s[0] << s[s.length() - 1] << '\n';
	}

	return 0;
}