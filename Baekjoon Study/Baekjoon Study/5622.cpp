#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]);
		count += ((int)s[i] - 65) / 3 + 3;

		if (s[i] == 'S' || s[i] == 'V' || s[i] == 'Y' || s[i] == 'Z') // PQRS���� 4�ڸ��� �ϳ��� �и�
			count--;
	}

	cout << count;

	return 0;
}