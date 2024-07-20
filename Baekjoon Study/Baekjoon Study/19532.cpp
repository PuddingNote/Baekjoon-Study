// #1
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	for (int x = -999; x <= 999; ++x) 
	{
		for (int y = -999; y <= 999; ++y) 
		{
			if (a * x + b * y == c && d * x + e * y == f) 
			{
				cout << x << " " << y << '\n';
				return 0;
			}
		}
	}
	return 0;
}

// #2
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	int delta = a * e - b * d;
	int delta_x = c * e - b * f;
	int delta_y = a * f - c * d;

	int x = delta_x / delta;
	int y = delta_y / delta;

	cout << x << " " << y << '\n';

	return 0;
}