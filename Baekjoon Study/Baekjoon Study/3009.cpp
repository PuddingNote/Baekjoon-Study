#include <iostream>
using namespace std;

struct Point
{
	int x, y;
};

int main()
{
	Point p1, p2, p3, p4;

	cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

	p4.x = p1.x ^ p2.x ^ p3.x;
	p4.y = p1.y ^ p2.y ^ p3.y;

	cout << p4.x << " " << p4.y << '\n';

	return 0;
}