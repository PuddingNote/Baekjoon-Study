#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int sum = 0;

	cin >> a >> b >> c;

	sum = a + b + c;

	if (a == 60 && b == 60 && c == 60)
	{
		cout << "Equilateral" << endl;
	}
	else
	{
		if (sum != 180)
		{
			cout << "Error" << endl;
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

	return 0;
}