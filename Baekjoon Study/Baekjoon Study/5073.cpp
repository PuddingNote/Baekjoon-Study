#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;

	while (1)
	{
		cin >> a >> b >> c;

		if (b > a) swap(a, b);
		if (c > a) swap(a, c);

		if (a == 0 && b == 0 && c == b)
		{
			break;
		}
		else
		{
			if (a >= b + c)
			{
				cout << "Invalid" << endl;
			}
			else
			{
				if (a == b && b == c && c == a)
				{
					cout << "Equilateral" << endl;
				}
				else
				{
					if (a == b || b == c || c == a)
					{
						cout << "Isosceles" << endl;
					}
					else
					{
						cout << "Scalene" << endl;
					}
				}
			}
		}
	}

	return 0;
}