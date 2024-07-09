#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cin >> x >> y >> z;

	if (x + y + z != 180)
	{
		cout << "Error" << '\n';
	}
	else if (x == 60 && y == 60 && z == 60)
	{
		cout << "Equilateral" << '\n';
	}
	else if (x == y || y == z || z == x)
	{
		cout << "Isosceles" << '\n';
	}
	else
	{
		cout << "Scalene" << '\n';
	}

	return 0;
}