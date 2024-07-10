#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	while (1)
	{
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0) break;
		
		if (x + y <= z || y + z <= x || z + x <= y)
		{
			cout << "Invalid" << '\n';
		}
		else if (x == y && y == z && z == x)
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
	}

	return 0;
}