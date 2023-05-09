#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, b, temp;
	string s;

	cin >> n >> b;

	while (n != 0)
	{
		temp = n % b;
		if (temp > 9)
		{
			temp += ('A' - 10);
			s += temp;
		}
		else
		{
			s += '0' + temp;
		}
		n /= b;
	}
	reverse(s.begin(), s.end());

	cout << s << endl;

	return 0;
}